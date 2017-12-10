/****************************************
* Calculator program that 
* -asks user about req type operation category(arithmetic,logical,relational and bitwise)
* -takes operands and required operator from user
* -executes operation and displays result
******************************************/

/* includes */
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


/* global variables used in calculator function and get operands function*/
u8 operator[5];            /*array of characters to store operator from user*/ 
u16 num1,num2;               /*the tow operands*/

/*function prototyping which is used in calculator function*/
void get_operands(void);

/*********************************
* function to get operator and 2 operands from user 
* but in case of !,~ operators it will take 1 operand only
* in case of << or >> it will ask for shift amount
************************************/
void get_operands(void)
{
	printf("\nEnter operator: ");
	scanf("%s",operator);
	printf("\nEnter 1st number: ");
	scanf("%d",&num1);
	if((strcmp(operator,"!")!=0)&&(strcmp(operator,"~")!=0)&&(strcmp(operator,"<<")!=0)&&(strcmp(operator,"!")!=0))
	{
		printf("\nEnter 2nd number: ");
		scanf("%d",&num2);
	}
	if((strcmp(operator,"<<")==0)||(strcmp(operator,">>")==0))
	{
		printf("\nEnter shift amount: ");
		scanf("%d",&num2);
	}
}


void calculator(void)
{
	char operation_category;    
	int result;
	int compare;              /*flag to store string compare function return*/
	int flag=0;               /*flag to be set if one of operators is chosen */
	
	/* welcome messages */
	printf("\n*****Welcome to calculator program*****\n");
	printf("For Arithmetic operations press a \n");
	printf("For Logical operations press l \n");
	printf("For Relational operations press r \n");
	printf("For Bitwise operations press b \n");
	
	operation_category=getche();       /*reads required category*/
	
	switch(operation_category)
	{
		case'a':
        while(flag!=1)                 
		{
			get_operands();
		
		    compare=strcmp(operator,"+");          /*function from string.h to compare entered string with this case*/
		    if(compare==0)                         /*if return =0 then operator entered is + */
		    {
			    result=num1+num2;
			    printf("\n%d+%d= %d",num1,num2,result);
			    flag=1;                             /*set flag to 1 because available operator is selected*/
		    }
		    compare=strcmp(operator,"-");
		    if(compare==0)
		    {
			    result=num1-num2;
			    printf("\n%d-%d= %d",num1,num2,result);
			    flag=1;
		    }
		    compare=strcmp(operator,"*");
		    if(compare==0)
		    {
			    result=num1*num2;
			    printf("\n%d*%d= %d",num1,num2,result);
			    flag=1;
		    }
		    compare=strcmp(operator,"/");
		    if(compare==0)
		    {
			    while(num2==0)                       /*make sure that second number is not 0 in division*/
			    {
				    printf("\n can not divide by 0 , enter num2 again: ");
				    scanf("%d",&num2);
			    }
			    result=num1/num2;
			    printf("\n%d/%d= %d",num1,num2,result);
			    flag=1;
		    }
		    if(flag==0)                               /*in case of none of operators is selected*/
		    {
			    printf("\n***wrong operator Try again***");
		    }
		}
		break;
		
		case'l':
		while(flag!=1)
		{
			get_operands();
		
		    compare=strcmp(operator,"&&");
		    if(compare==0)
		    {
			    result=num1&&num2;
			    printf("\n%d&&%d= %d",num1,num2,result);
			    flag=1;
		    }
		    compare=strcmp(operator,"||");
		    if(compare==0)
		    {
			    result=num1||num2;
			    printf("\n%d||%d= %d",num1,num2,result);
			    flag=1;
		    }
		    compare=strcmp(operator,"!");
		    if(compare==0)
		    {
			    result=!num1;
			    printf("\n!%d= %d",num1,result);
			    flag=1;
		    }
			
		    if(flag==0)
		    {
			    printf("\n***wrong operator Try again***");
		    }
		}
		break;
		
		case'r':
		while(flag!=1)
		{
			get_operands();
		
		    compare=strcmp(operator,">");
		    if(compare==0)
		    {
			    result=num1>num2;
			    printf("\n%d+%d= %d",num1,num2,result);
			    flag=1;
		    }
		    compare=strcmp(operator,"<");
		    if(compare==0)
		    {
			    result=num1<num2;
			    printf("\n%d-%d= %d",num1,num2,result);
			    flag=1;
		    }
		    compare=strcmp(operator,">=");
		    if(compare==0)
		    {
			    result=num1>=num2;
			    printf("\n%d>=%d= %d",num1,num2,result);
			    flag=1;
		    }
		    compare=strcmp(operator,"<=");
		    if(compare==0)
		    {
			    result=num1<=num2;
			    printf("\n%d>=%d= %d",num1,num2,result);
			    flag=1;
		    }
			compare=strcmp(operator,"==");
		    if(compare==0)
		    {
			    result=num1==num2;
			    printf("\n%d==%d= %d",num1,num2,result);
			    flag=1;
		    }
		    compare=strcmp(operator,"!=");
		    if(compare==0)
		    {
			    result=num1!=num2;
			    printf("\n%d>=%d= %d",num1,num2,result);
			    flag=1;
		    }
		    if(flag==0)
		    {
			    printf("\n***wrong operator Try again***");
		    }
		}
		break;
		
		case'b':
		while(flag!=1)
		{
			get_operands();
		
		    compare=strcmp(operator,"&");
		    if(compare==0)
		    {
			    result=num1&num2;
			    printf("\n%d&%d= %d",num1,num2,result);
			    flag=1;
		    }
		    compare=strcmp(operator,"|");
		    if(compare==0)
		    {
			    result=num1|num2;
			    printf("\n%d|%d= %d",num1,num2,result);
			    flag=1;
		    }
		    compare=strcmp(operator,"^");
		    if(compare==0)
		    {
			    result=num1^num2;
			    printf("\n%d^%d= %d",num1,num2,result);
			    flag=1;
		    }
		    compare=strcmp(operator,"~");
		    if(compare==0)
		    {
			    result=~num1;
			    printf("\n~%d= %d",num1,result);
			    flag=1;
		    }
			compare=strcmp(operator,"<<");
		    if(compare==0)
		    {
			    result=num1<<num2;
			    printf("\n%d<<%d= %d",num1,num2,result);
			    flag=1;
		    }
			compare=strcmp(operator,">>");
		    if(compare==0)
		    {
			    result=num1>>num2;
			    printf("\n%d>>%d= %d",num1,num2,result);
			    flag=1;
		    }
		    if(flag==0)
		    {
			    printf("\n***wrong operator Try again***");
		    }
		}
		break;
		
		default:
		printf("***wrong operation category***");
	}
}
