/*---------------------------------------*/
/*--------------ÖÐ¶Ïº¯Êý-----------------*/
/*-------------2019.12.17----------------*/
/*----------------V1.0-------------------*/

#ifndef   __INTERRUPT_H
#define		__INTERRUPT_H

#include	"config.h"

void EX_init(unsigned char num)
void Timer_init(unsigned char num)

void Int0_Routine(void)       
void Int1_Routine(void)       
void Int2_Routine(void)       
void Int3_Routine(void)       
void Int4_Routine(void)
	

void Timer0_Routine(void)     
void Timer1_Routine(void)     
void Timer2_Routine(void)     
void Timer3_Routine(void)     
void Timer4_Routine(void)


void UART1_Routine(void)      
void UART2_Routine(void)      
void S3_Routine(void)       
void S4_Routine(void)       
	

void ADC_Routine(void)  
	

void LVD_Routine(void)   
	

void PCA_Routine(void)   
	

void SPI_Routine(void)      
	
void Comparator_Routine(void)     
	

void PWM_Routine(void)     
void PWMFD_Routine(void)     
	



#endif