#include<stdio.h>
#include<math.h>
void main()
{
float unit,bill=0;
printf("Enter Electricity Units - ");
scanf("%f",&unit);
if(unit<=150)
{
bill=unit*3;
printf("Bill For Consumer = %f \n",bill);
}
else if(unit>150&&unit<=350)
{
bill=100+(3.75*unit);
printf("Bill For Consumer = %f \n",bill);
}
else if(unit>350&&unit<=400)
{
bill=250+(4.25*unit);
printf("Bill For Consumer = %f \n",bill);
}
else
printf("Invalid Units\n");

            }
