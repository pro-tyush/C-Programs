#include<stdio.h>
void bubble_sort(int[],int);
void main()
{ int a[10],n,i,j,swap;
  printf("\n Enter the number of elements :  ");
  scanf("%d",&n);
  printf("\n Enter %d integers : ",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  } 
 bubble_sort(a,n);  
  printf("\n Sorted list :");
  { for(i=0;i<n;i++)
     {
       printf( "%d ",a[i]);
     }
   }
}
void bubble_sort(int a[],int n)
{
 int i,j,temp;
 for(i=0;i<n;i++)
 {
   for(j=0;j<n-i;j++)
   {
     temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
 }
}
