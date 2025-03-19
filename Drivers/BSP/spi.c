#include "stm32f4xx.h"


void SPIInit(void)
{
	RCC->APB2ENR |= 0x00001000 ; //Enable 

	SPI1->CR1 |= 0x00000018;  //  fPCLK/16
	
	SPI1->CR1 |= 0x00000000;  // CPOL = 0  CPHA = 0
	
	SPI1->CR1 |= 0x00000000;  //8bit data frame format 
	
	SPI1->CR1 |= 0x00000000;  // MSB transmitted first
	
//	SPI_Init(SPI_TypeDef* SPIx, SPI_InitTypeDef* SPI_InitStruct);
}

