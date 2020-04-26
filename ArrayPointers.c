#include <stdio.h>
#include <stdlib.h>
void main(){
	printf("\nCreated By - Pratyush Sharma\n");
	
	int i; //Variable For Loop
	int siz; //To know size of Array
	int arr[] = {1,2,3,4,5}; //Array With 5 Elements index = 0to4
	int *ptr; //Pointer Declare
	ptr = &arr[0]; //Storing Address of 1st element of array in pointer //Same As int *ptr = &arr[0]
	

	//Address Of Array Elements - 
	printf("\nAddress Of Array Elements - ");
	for(i=0; i<=4; i++) //Loop from i=0 to n-1
	{
		printf("\n%p",&arr[i]); //Prints Addresses Of Array Elements
	}


	siz = sizeof(arr); //size of array in bytes
	printf("\n\n\nSize Of Array With 5 Elements - %d \n",siz); //size will be 20
	printf("\nSize Of Int - %d bytes \n",siz/5); //size of single int will be 4. NOTE-New Compilers Have 4Bytes Earlier Had 2 Bytes. x32-2Bytes x64-4Bytes
	printf("\n");

	
	//Printing Whole Array Using Address Of arr[0]
	printf("\nPrinting Whole Array Using Address Of arr[0] stored in ptr - \n");
	for(i=0;i<=4;i++) //Loop 4 times
	{
		printf("%d ",*ptr); //print value stored in ptr i.e for a[0] = 1
		ptr++; //ptr increase by 1 //Note ptr was weird hexatype code and we increase it by 1 not 4?

		//Note ptr++ increments automatically by 4 bytes. It knows the datatype and automatically adds 4 in case of int.
	}
	printf("\n\nDiffrences in Ptr = %ld",&arr[2]-&arr[1]);
	printf("\n\n");
	

}
