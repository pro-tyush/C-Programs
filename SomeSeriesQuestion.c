#include<stdio.h>
void main()
{
	int i,j,num,fact;
	float  sum=0;
	printf("Enter last element:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)//loop for adding elements of series
	{

		fact=1;
		sum=0;
		for(j=1;j<=i;j++)//factorial
		{
			fact=fact*j;
		}
		sum=sum+(1.0)/fact;
	}
	printf("\nSum Of Series - %f \n",sum);

}


