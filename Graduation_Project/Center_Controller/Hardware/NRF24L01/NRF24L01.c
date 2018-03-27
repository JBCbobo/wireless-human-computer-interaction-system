#include "NRF24L01.h"

int CE_fd;
int IRQ_fd;
int CSN_fd;
int SCK_fd;
int MISO_fd;
int MOSI_fd;

const u8 TX_ADDRESS[TX_ADR_WIDTH] = {0X34,0X43,0X10,0X10,0X01};
const u8 RX_ADDRESS[RX_ADR_WIDTH] = {0X34,0X43,0X10,0X10,0X01};

static int GPIO_Configure(char* address,char* num,char* dir)
{
    char tmp[60];
    int fd;
    fd = open(SYSFS_GPIO_EXPORT, O_WRONLY);
    write(fd, num ,sizeof(num));
    close(fd);
    sprintf(tmp,"%sdirecton",address);
    fd = open(tmp, O_WRONLY);
    write(fd, dir , sizeof(dir));
    close(fd);
    fd = open(address,O_RDWR);
    return fd;
}

void NRF24L01_Init(void)
{
    CE_fd = GPIO_Configure(CE,"14","out");
    IRQ_fd = GPIO_Configure(CE,"15","in");
    CSN_fd = GPIO_Configure(CE,"175","out");
    SCK_fd = GPIO_Configure(CE,"13","out");
    MISO_fd = GPIO_Configure(CE,"10","in");
    MOSI_fd = GPIO_Configure(CE,"12","out");
    CE_L;
    CSN_H;
}


static u8 NRF24L01_IO_read(int fd)
{
    u8 buf[3];//at least 3
    while (read(buf, 3, fd) != NULL)
    return (buf[0]-48);
}

static void SPI_write_Byte(u8 DATA)
{
    u8 Temp_data,i;
    Temp_data = DATA;
    for(i=0;i<8;i++)
    {
        if(Temp_data & 0x80)
        {
            MOSI_H;
        }
        else
        {
            MOSI_L;
        }
        SCK_H;
        Temp_data = Temp_data << 1;
        SCK_L;
    }
}

static u8 SPI_read_Byte(void)
{
    u8 i;
    u8 sta;
    u8 Temp_data = 0;

    for(i=0;i<8;i++)
    {

        SCK_H;
        sta = NRF24L01_IO_read(MISO_fd);
        Temp_data = Temp_data << 1;
        if(sta)
        {
            Temp_data |= 0x01;
        }
        SCK_L;

    }
    return Temp_data;
}

static void NRF24L01_write_reg(u8 reg, u8 value)
{
    CSN_L;
    SPI_write_Byte(reg);
    SPI_write_Byte(value);
    CSN_H;
}

static u8 NRF24L01_read_reg(u8 reg)
{
    u8 data;
    CSN_L;
    SPI_write_Byte(reg);
    data = SPI_read_Byte();
    CSN_H;
    return data;
}

static void NRF24L01_write_buf(u8 reg,u8 *pBuf,u8 len)
{
    u8 i;
    CSN_L;
    SPI_write_Byte(reg);
    for(i=0; i<len;i++)
    {
        SPI_write_Byte(*(pBuf+i));
    }
    CSN_H;
}

static void NRF24L01_read_buf(u8 reg,u8 *pBf,u8 len)
{
    u8 i;
    CSN_L;
    SPI_write_Byte(reg);
    for(i=0;i<len;i++)
    {
        pBf[i] = SPI_read_Byte();
    }
    CSN_H;
}

u8 NRF24L01_check(void)
{
    u8 i;
    u8 buf[5] = {0xA5,0xA5,0xA5,0xA5,0xA5};
    NRF24L01_write_buf(NRF_WRITE_REG+TX_ADDR,buf,5);
    NRF24L01_read_buf(TX_ADDR,buf,5);
    for(i=0;i<5;i++)
    {
        if(buf[i]!=0xA5)
            break;
    }
    return i==5;
}   

void NRF24L01_RX_Mode(void)
{
    CE_L;
    NRF24L01_write_buf(NRF_WRITE_REG+RX_ADDR_P0,(u8*)RX_ADDRESS,RX_ADR_WIDTH);
    NRF24L01_write_reg(NRF_WRITE_REG+EN_AA,0X01);
    NRF24L01_write_reg(NRF_WRITE_REG+EN_RXADDR,0X01);
    NRF24L01_write_reg(NRF_WRITE_REG+RF_CH,40);
    NRF24L01_write_reg(NRF_WRITE_REG+RX_PW_P0,RX_PLOAD_WIDTH);
    NRF24L01_write_reg(NRF_WRITE_REG+RF_SETUP,0X0F);
    NRF24L01_write_reg(NRF_WRITE_REG+CONFIG,0X0F);
    CE_H;
}

void NRF24L01_TX_Mode(void)
{
    CE_L;
    NRF24L01_write_buf(NRF_WRITE_REG+TX_ADDR,(u8*)TX_ADDRESS,TX_ADR_WIDTH);
    NRF24L01_write_buf(NRF_WRITE_REG+RX_ADDR_P0,(u8*)RX_ADDRESS,RX_ADR_WIDTH);
    NRF24L01_write_reg(NRF_WRITE_REG+EN_AA,0X01);
    NRF24L01_write_reg(NRF_WRITE_REG+EN_RXADDR,0X01);
    NRF24L01_write_reg(NRF_WRITE_REG+SETUP_RETR,0X1A);
    NRF24L01_write_reg(NRF_WRITE_REG+RF_CH,40);
    NRF24L01_write_reg(NRF_WRITE_REG+RF_SETUP,0X0F);
    NRF24L01_write_reg(NRF_WRITE_REG+CONFIG,0X0e);
    CE_H;
}

u8 NRF24L01_RxPacket(u8 *rxbuf)
{
    u8 sta;
    sta=NRF24L01_read_reg(STATUS);  //读取状态寄存器的值
    NRF24L01_write_reg(NRF_WRITE_REG+STATUS,sta); //清除TX_DS或MAX_RT中断标志
    if(sta&RX_OK)//接收到数据
    {
        NRF24L01_read_buf(RD_RX_PLOAD,rxbuf,RX_PLOAD_WIDTH);//读取数据
        NRF24L01_write_reg(FLUSH_RX,0xff);//清除RX FIFO寄存器
        return 0;
    }
    return 1;//没收到任何数据
}

u8 NRF24L01_TxPacket(u8 *txbuf)
{
    u8 sta;  
    CE_L;
    NRF24L01_write_buf(WR_TX_PLOAD,txbuf,TX_PLOAD_WIDTH);//写数据到TX BUF  32个字节
    CE_H;//启动发送
    while(NRF24L01_IO_read(IRQ_fd)!=0);//等待发送完成
    sta=NRF24L01_read_reg(STATUS);  //读取状态寄存器的值
    NRF24L01_write_reg(NRF_WRITE_REG+STATUS,sta); //清除TX_DS或MAX_RT中断标志
    if(sta&MAX_TX)//达到最大重发次数
    {
        NRF24L01_write_reg(FLUSH_TX,0xff);//清除TX FIFO寄存器
        return MAX_TX;
    }
    if(sta&TX_OK)//发送完成
    {
        return TX_OK;
    }
    return 0xff;//其他原因发送失败
}

