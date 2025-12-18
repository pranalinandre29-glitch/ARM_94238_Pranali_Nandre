/*
 * My_Switch.c
 *
 *  Created on: Dec 17, 2025
 *      Author: prana
 */
#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"
#include "My_Switch.h"
void Switch_init(void)
{
	//0. enable clock for GPIOD in AHB1
	RCC->AHB1ENR |= BV(0);
	//1. select mode as output
	GPIOA->MODER &= ~(BV(0) | BV(1) );
	//2. select type as push pull
	//GPIOA->OTYPER &= ~(BV(0)) | BV(13) | BV(14) | BV(15));
	//3. select speed as low
	GPIOA->OSPEEDR &= ~(BV(0) | BV(1) );

	//4. select pull up/down as no
	GPIOA->PUPDR &= ~(BV(0) | BV(1) );

}
int Switch_press(void)
{
	if ((GPIOA->IDR) & BV(0))
	{
		return 1;

	}
	else
	{
		return 0;
	}
}


