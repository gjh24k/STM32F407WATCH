#include "spi.h"


void SPIInit(void)
{
	RCC->APB2ENR |= 0x00001000 ; //Enable SPI1 Clock

	SPI1->CR1 |= 0x00000018;  //  fPCLK/16
	
	SPI1->CR1 |= 0x00000000;  // CPOL = 0  CPHA = 0
	
	SPI1->CR1 |= 0x00000000;  //8bit data frame format 
	
	SPI1->CR1 |= 0x00000000;  // MSB transmitted first
	
	SPI1->CR1 |= 0x00000000;  //Transmit-only
	
	SPI1->CR1 |= 0x00000002;  // Master configuration
	
	SPI1->CR1 |= 0x00000020;  //Enable SPI1
	
	SPI1->CR2 |= 0x00000002;   //Enable DMA request when TXE is set to request DMA 
//	SPI_InitTypeDef SPI_InitStruct;
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SPI1 , ENABLE);
//	
//	SPI_InitStruct.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_16;
//	SPI_InitStruct.SPI_CPHA = SPI_CPHA_1Edge;
//	SPI_InitStruct.SPI_CPOL = SPI_CPOL_Low;
//	SPI_InitStruct.SPI_DataSize = SPI_DataSize_8b;
//	SPI_InitStruct.SPI_Direction = SPI_Direction_1Line_Tx;    //?
//	SPI_InitStruct.SPI_FirstBit = SPI_FirstBit_MSB;
//	SPI_InitStruct.SPI_Mode = SPI_Mode_Master;     //?
//	SPI_InitStruct.SPI_NSS = SPI_NSS_Soft; 
//	SPI_Init(SPI1, &SPI_InitStruct);
//	
//	SPI_Cmd( SPI1, ENABLE);
//SPI_I2S_DMACmd(SPI1, SPI_I2S_DMAReq_Tx, ENABLE);
}

