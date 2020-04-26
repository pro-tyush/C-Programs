#include <stdio.h>
#include <stdlib.h>

void main()
{
	int arr[]= {1,2,3,4,5};
	int i;
	int * ptr = arr;
	printf("%p",ptr);
	printf("\n%p",&ptr);
	printf("\n%p",&arr[0]);
	
	//&Ptr is The ACTUAL address of PTR
	//ptr=&a[0] ptr is address of pointed variable
	//*ptr is the value not address
	printf("\nWe Conculde That &ptr(actual address) is 2 bytes behind the address of pointed variable(&a[i]==ptr)");


