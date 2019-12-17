/*---------------------------------------*/
/*-------------数码管显示----------------*/
/*-------------2019.12.16----------------*/
/*----------------V1.0-------------------*/

#ifndef   __NIXIETUBE_H
#define		__NIXIETUBE_H

#include	"config.h"

#define	Smg_A		10	//数码管显示 A
#define	Smg_B		11	//数码管显示 B
#define	Smg_C		12	//数码管显示 C
#define	Smg_D		13	//数码管显示 D
#define	Smg_E		14	//数码管显示 E
#define	Smg_F		15	//数码管显示 F
#define	Smg_.		16	//数码管显示 .
#define	Smg_empty		17	//数码管不显示


extern void Smg_display(char date);




#endif