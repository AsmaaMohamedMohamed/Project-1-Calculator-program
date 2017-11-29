# Project-1-Calculator-program
It is a multi file project which consists of 4 files: 3functions and main code
/*-This is the main program
  -It makes user choose one of these programs
        >>calculator
        >>power calculation
        >>factorial calculation*/

//includes	
#include<stdio.h>
#include<conio.h>
#include<string.h>

//functions prototyping
void calculator(void);
void power(void);
void factorial(void);

//global variables
char program;                        //for checking which program is required
char continue_prog;                  //for checking if user wants to continue in program or exit to another
char continue_main;                  //for checking if user wants to continue in the main program or end it
char exit_sure;                      //to make sure that user wants to end

//main program
void main()
{
	do
	{
		do
		{
			//welcome messages
			printf("\n********Welcome to our main program********\n");
	        printf("For Calculator program press c \n");
			printf("For Factorial program press f \n");
			printf("For Power program press p \n");
			
			program=getche();                  //read required program from user
			switch(program)
			{
				case'c':                
				do
				{
					calculator();              //call calculator program 
					printf("\nDo you want to continue calculator program ?? ");
					continue_prog=getche();   //ask if user will continue in calculator program or not
				}
				while(continue_prog=='y');    //calculator prog will continue while the user presses y(yes)
				break;
				
				case'f':
				do
				{
					factorial();              //call factorial program 
					printf("\nDo you want to continue factorial program ?? ");
					continue_prog=getche();   //ask if user will continue in factorial program or not
				}
				while(continue_prog=='y');    //factorial prog will continue while the user presses y(yes)
				break;
				
				case'p':
				do
				{
					power();                  //call power program
					printf("\nDo you want to continue power program ?? ");
					continue_prog=getche();   //ask if user will continue in power program or not
				}
				while(continue_prog=='y');    //power prog will continue while the user presses y(yes)
				break;
				
				default:
				printf("\n*****This program doesn't exist*****");   //in case of not entering c,p or f
			}
			printf("\nDo you want to continue main program??  ");
			continue_main=getche();           //ask user if he wants to continue in main prog after ending any prog of 3 
		}
		while(continue_main=='y');            //main prog will continue while the user presses y(yes)
        printf("\nAre you sure you want to exit?? ");
		exit_sure=getche();                    //make sure that the user is sure to exit
		while((exit_sure!='y')&&(exit_sure!='n'))    //there will be no decision without entering n or y
		{
			printf("\nPlease press y or n: ");
			exit_sure=getche();
		}
	}
	while(exit_sure=='n');                      // the main prog will not exit while the user presses n 
}
