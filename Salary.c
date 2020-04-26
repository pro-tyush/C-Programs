#include<stdio.h>
#include<math.h>

void main(){
float basicsal=0;
printf("\n Enter Your Basic Salary - ");
scanf("%f",&basicsal);
float hra,da;
if(basicsal>4000)
{
hra=0.1*basicsal;
da=0.05*basicsal;
}
else
{
hra=0.05*basicsal;
da=0.02*basicsal;
}
float grosssal=basicsal+hra+da;
printf("\n Gross Salary is - %f",grosssal);

}
