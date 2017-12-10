
/*power function which takes number and calculate the required power for this number*/

/*includes*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

/*standard types definition*/
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;
typedef float f32;
typedef double f64;
typedef long double f128;

void power(void)
{
	u16 num;                         /*number required to get the power of*/
	u8 power_num;                   /*power value*/
	u16 result=1;                    /*to store updated result*/
	u8 i;                           /*counter*/
	
	/*welcome messages*/
	printf("\n*****Welcome to power program*****");
	printf("\nEnter number and power number:\n");
	scanf("%d",&num);                 /*read req number from user*/        
	scanf("%d",&power_num);           /*read power value from user*/
	for(i=0;i<power_num;i++)          
	{
		result=result*num;            /*multiply number by itself many times equal to power value*/
	}
	printf("\n%d^%d= %d",num,power_num,result);    /*display final result*/
}