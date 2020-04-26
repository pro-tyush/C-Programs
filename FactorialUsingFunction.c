#include <stdio.h>
//Factorial Using Function
int fact(int n)
{
int i=1,fac=1;
for(i=n; i>0; i--)
 {fac=fac*i;}
return fac;

}

void main(){
int num,ans;
printf("Enter Number - ");
scanf("%d",&num);
ans = fact(num);
printf("Factorial - %d \n",ans);
}
