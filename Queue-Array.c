#include <stdio.h>
#include <stdlib.h>

#define MAX 5
char queue[MAX]; //Macros are constant NOTE : without ;
int n = sizeof(queue) / sizeof(queue[0]); //No Of Elements = Size Of Array / Size Of 1st Element //n==MAX

char item;
int front = -1;
int rear = -1;
int i;

void insert();

void delete();
void printQueue();
void printFrontRear();

void main(){	
	int choice;
	do{
		printf("\nWELCOME TO QUEUE USING ARRAY\n");		
		printf("\nInsert - 1 \n\nDelete - 2 \n\nPrintQueue - 3 \n\nPrintFrontRear - 4 \n\nExit - 5 \n\n");
		printf("=> ");
		scanf("%d",&choice);
		switch(choice){
			case 1: insert();
			break;
			case 2: delete();
			break;
			case 3: printQueue();
			break;
			case 4: printFrontRear();
			break;
			case 5: printf("\nCredits - Pratyush Sharma \n\n");
				exit(0);
			break;
			default: printf("\nInvalid Input \n\n");
			}
		printf("\n************************************************************************************************************************************************************************\n\n\n");		
	}
	while(choice != 5);	
}
void insert(){
	if(rear == n-1)
	{
		printf("\nQueue OverFlow \n");	
	}

	else
	{
		if(front == -1) //Only For 1st Element Front++ and Rear++
		{
		 front = 0; //Here Front And Rear Both = 0 i.e Only 1 Element
		}	
		
		rear++; //Increase Rear then put item at Rear //From II Element only Rear++
 		printf("\nEnter Character : ");
		scanf(" %c",&item);
		queue[rear] = item; //Insert At End 
	}

}

void delete()
{
	if( (front == -1) || (rear == -1) || (front == rear + 1) ) //When We Delete All Elememts One By One Front Exceeds Rear (front>rear) will work too
	{
		printf("\nQueue UnderFlow \n");	
	}
	
	else
	{
		item = queue[front]; //put front element in item
		printf("\nDeleted Item Is : %c",item);	
		front++; //Front Points To Next Element
	}

}

void printQueue()
{
if( (front == -1) || (rear == -1) || (front == rear + 1) )                 
	{
		printf("\nQueue UnderFlow \n");	
	}
	
	else
	{	printf("\n\n");
		for(i = front; i <= rear; i++)
		{
			printf("|%c|",queue[i]);		
		}		
		printf("\n\n");
	}
}

void printFrontRear(){
	printf("\nFront Is At Index : %d",front);
	printf("\nRear Is At Index : %d",rear);
}


