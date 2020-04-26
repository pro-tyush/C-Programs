#include <stdio.h>
//For Loop
void main(){
int i,j=1,k=1;
printf("For Loop - \n");
for(i=1;i<11;i++)
	{
	printf("%d \n",i);	
	}

//while
printf("While Loop - \n");
while(j<11)
	{
	printf("%d \n",j);
	j++;
	}

//do-while
printf("Do-While - \n");
do
	{
	printf("%d \n",k);
	k++;
	}
while(k<11);

}
