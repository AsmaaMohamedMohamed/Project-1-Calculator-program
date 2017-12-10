
/*factorial function which reads number then calculates the its factorial*/

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

void factorial(void)
{
	u16 num;                              /*number req to calculate factorial of*/
	u16 i;                                /*counter*/
	u16 result=1;                         /*to store updated result */
	printf("\n*****Welcome to Factorial program*****\n");
	printf("Enter Number: ");
	scanf("%d",&num);                     /*reads number from user*/

	for(i=1;i<=num;i++)
	{
		result=result*i;                  /*multiply result by numbers increasing from 1 to number*/
	}
	printf("\n%d!= %d",num,result);       /*display final result*/
}