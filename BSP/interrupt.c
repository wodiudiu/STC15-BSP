/*---------------------------------------*/
/*--------------�жϺ���-----------------*/
/*-------------2019.12.17----------------*/
/*----------------V1.0-------------------*/

#include "interrupt.h"

//========================================================================
// ����: void EX_init(unsigned char num)
// ����: �ⲿ�жϳ�ʼ��
// ����: num������0��1
// ����: �򿪳ɹ����� 0 ��ʧ�ܷ��� -1
// �汾: V1.0, 2019-12-17
//========================================================================
void EX_init(unsigned char num)//�ⲿ�жϳ�ʼ��
{
	EA =1;//�ж��ܿ���
	
	if(num > 1) return -1; //��ʧ��
	
	if(num == 0)//�ⲿ�ж�0��
		EX0 =1;
	
	if(num == 1)//�ⲿ�ж�1��
		EX1 =1;
	
	
	return 0��//�򿪳ɹ�

}

//========================================================================
// ����: void Timer_init(unsigned char num)
// ����: ��ʱ���жϳ�ʼ��
// ����: num������0��1
// ����: �򿪳ɹ����� 0 ��ʧ�ܷ��� -1
// �汾: V1.0, 2019-12-17
//========================================================================
void Timer_init(unsigned char num)
{
	EA =1;
	
	if(num >1) return -1;//��ʧ��
	
	if(num == 0)//��ʱ��0��
		ET0 =1;
	
	if(num ==1)//��ʱ��1��
		ET1 =1;
	
	return 0;//�򿪳ɹ�
}



/******************�ⲿ�ж�*******************/
void Int0_Routine(void)       interrupt 0;

void Int1_Routine(void)       interrupt 2;

void Int2_Routine(void)       interrupt 10;

void Int3_Routine(void)       interrupt 11;

void Int4_Routine(void)       interrupt 16;



/******************��ʱ���ж�*******************/

void Timer0_Routine(void)     interrupt 1;

void Timer1_Routine(void)     interrupt 3;

void Timer2_Routine(void)     interrupt 12;

void Timer3_Routine(void)     interrupt 19;

void Timer4_Routine(void)     interrupt 20;




/******************�����ж�*******************/

void UART1_Routine(void)      interrupt 4;

void UART2_Routine(void)      interrupt 8;

void S3_Routine(void)       interrupt 17;

void S4_Routine(void)       interrupt 18;



/****************A/Dת���ж�******************/
void ADC_Routine(void)   interrupt 5;




/****************��ѹ����ж�******************/
void LVD_Routine(void)   interrupt 6;



/****************PCA�ж�******************/
void PCA_Routine(void)   interrupt 7;



/****************SPI�ж�******************/
void SPI_Routine(void)      interrupt 9;



/****************�Ƚ����ж�******************/
void Comparator_Routine(void)     interrupt 21;



/****************PWM�ж�******************/
void PWM_Routine(void)     interrupt 22;
void PWMFD_Routine(void)     interrupt 23;