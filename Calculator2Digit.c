
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<string.h>	
void main() {

float a,b,result;
char o;
char choice[3];

printf("Enter The Operation Add Sub Div Mult - ");
scanf("%c",&o);
printf("\n Enter First Number - ");
scanf("%f",&a);

printf(" \n Enter Second Number - ");
scanf("%f",&b);

printf("\n Would You Like To Print Answer - Yes/No?");
scanf("%s",choice);
while(strcmp(choice,"no"))
{
	switch(o)
	{
	case '+':result=a+b;
	printf("\n %f",result);
	break;
	case '-':result=a-b;
	printf("\n %f",result);
	break;
	case '/':result=a/b;
	printf("\n %f",result);
	break;
	case '*':result=a*b;
	printf("\n %f",result);
	break;
	default:printf("Invalid Math Operation");

	}
exit(0);
}
              }
