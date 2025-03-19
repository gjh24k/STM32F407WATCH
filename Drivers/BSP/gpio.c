#include "stm32f4xx.h"

//PA5 - SCLK
//PA7 - MOSI
void SPI_GPIO_Init(void)
{
	RCC->AHB1ENR |= 0x00000001 ;	  //Enable GPIOA clock
	
	GPIOA->MODER |= 0x00000800;  		//AF SPI_CLK
	GPIOA->MODER |= 0x00008000;	 		//AF SPI_MOSI
	
	GPIOA->OTYPER |= 0x00000000;  	//Output push-pull
	
	GPIOA->OSPEEDR |= 0x00000800;		//PA5  High speed
	GPIOA->OSPEEDR |= 0x00008000;		//PA7  High speed
	
	GPIOA->PUPDR |= 0x00000000;  //No pull-up, pull-dow
	
	GPIOA->AFR[1] |= 0x00500000;    //SPI1_CLK
	GPIOA->AFR[1] |= 0x50000000; 		//SPI1_MOSI
	
//	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
//	
//	GPIO_InitTypeDef GPIO_InitStruct;
//	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AF;
//	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
//	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_5 | GPIO_Pin_7;
//	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;
//	GPIO_InitStruct.GPIO_Speed = GPIO_High_Speed;
//	GPIO_Init( GPIOA, &GPIO_InitStruct);
//	
//	GPIO_PinAFConfig(GPIOA, GPIO_PinSource5, GPIO_AF_SPI1);
//	GPIO_PinAFConfig(GPIOA, GPIO_PinSource7, GPIO_AF_SPI1);
}
