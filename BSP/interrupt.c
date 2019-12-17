/*---------------------------------------*/
/*--------------中断函数-----------------*/
/*-------------2019.12.17----------------*/
/*----------------V1.0-------------------*/

#include "interrupt.h"

//========================================================================
// 函数: void EX_init(unsigned char num)
// 描述: 外部中断初始化
// 参数: num：输入0或1
// 返回: 打开成功返回 0 ，失败返回 -1
// 版本: V1.0, 2019-12-17
//========================================================================
void EX_init(unsigned char num)//外部中断初始化
{
	EA =1;//中断总控制
	
	if(num > 1) return -1; //打开失败
	
	if(num == 0)//外部中断0打开
		EX0 =1;
	
	if(num == 1)//外部中断1打开
		EX1 =1;
	
	
	return 0；//打开成功

}

//========================================================================
// 函数: void Timer_init(unsigned char num)
// 描述: 定时器中断初始化
// 参数: num：输入0或1
// 返回: 打开成功返回 0 ，失败返回 -1
// 版本: V1.0, 2019-12-17
//========================================================================
void Timer_init(unsigned char num)
{
	EA =1;
	
	if(num >1) return -1;//打开失败
	
	if(num == 0)//定时器0打开
		ET0 =1;
	
	if(num ==1)//定时器1打开
		ET1 =1;
	
	return 0;//打开成功
}



/******************外部中断*******************/
void Int0_Routine(void)       interrupt 0;

void Int1_Routine(void)       interrupt 2;

void Int2_Routine(void)       interrupt 10;

void Int3_Routine(void)       interrupt 11;

void Int4_Routine(void)       interrupt 16;



/******************定时器中断*******************/

void Timer0_Routine(void)     interrupt 1;

void Timer1_Routine(void)     interrupt 3;

void Timer2_Routine(void)     interrupt 12;

void Timer3_Routine(void)     interrupt 19;

void Timer4_Routine(void)     interrupt 20;




/******************串口中断*******************/

void UART1_Routine(void)      interrupt 4;

void UART2_Routine(void)      interrupt 8;

void S3_Routine(void)       interrupt 17;

void S4_Routine(void)       interrupt 18;



/****************A/D转换中断******************/
void ADC_Routine(void)   interrupt 5;




/****************低压检测中断******************/
void LVD_Routine(void)   interrupt 6;



/****************PCA中断******************/
void PCA_Routine(void)   interrupt 7;



/****************SPI中断******************/
void SPI_Routine(void)      interrupt 9;



/****************比较器中断******************/
void Comparator_Routine(void)     interrupt 21;



/****************PWM中断******************/
void PWM_Routine(void)     interrupt 22;
void PWMFD_Routine(void)     interrupt 23;