#include <stdio.h>
void main()
{
int i,n=5,j,temp;
int arr[5]={19,57,2,43,69};

for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;i++)
	{
		if(arr[j]<arr[j+1])
		{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		}
		
	}

}

for(i=0;i<n;i++)
{
	printf(" %d ",arr[i]);

}






}
