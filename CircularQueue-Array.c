#include<stdio.h>
#include<stdlib.h>
#define MAX 3

char cqueue[MAX];
int n = MAX;
char item;
int i;
int front = -1;
int rear = -1;

void insert();
void delete();
void printCQueue();
void printFrontRear();

void main(){
    int choice;
	do{
		printf("\nWELCOME TO CIRCULAR QUEUE USING ARRAY\n");		
		printf("\nInsert - 1 \n\nDelete - 2 \n\nPrintCircularQueue - 3 \n\nPrintFrontRear - 4 \n\nExit - 5 \n\n");
		printf("=> ");
		scanf("%d",&choice);
		switch(choice){
			case 1: insert();
			break;
			case 2: delete();
			break;
			case 3: printCQueue();
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

/*
void insertDS(){
    if( (front == rear + 1) || ( (front == 0) && (rear == n-1) ) ) //OF if Front Just Before Rear(Rear Has Become 0 then also Filled) or Front=0 Rear=Last Means All Spaces Filled 
    { 
        printf("\nCircular Queue OverFlow \n");
    }
    else
    {
        if(front==-1)
        {
            front = 0;
            rear = 0;
        }
        else if(rear == n-1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        printf("\nEnter Character : ");
        scanf(" %c",&item);
        cqueue[rear] = item;
    }   
}
*/

void insert(){
    if( (front == rear + 1) || ( (front == 0) && (rear == n-1) ) ) //OF if Front Just Before Rear(Rear Has Become 0 then also Filled) or Front=0 Rear=Last Means All Spaces Filled 
    { 
        printf("\nCircular Queue OverFlow \n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        if(rear == n-1)
        {
            rear = -1;
        }
        rear++;
        printf("\nEnter Character : ");
        scanf(" %c",&item);
        cqueue[rear]=item;
    }
    
}

void delete(){
    if ( (front == -1) || (rear == -1) )
    {
       printf("\nQueue UnderFlow");
    }
    else
    {
        item = cqueue[front];
        printf("\nDeleted Item : %c",item);
        //3 cases in deletion
        if (front == rear)
        { //If Last Element is being deleted we reset queue
            front = -1;
            rear = -1;
        }
        else if (front == n-1)
        { //If front is at last, front will become 0 after deletion
            front = 0;
        }
        else
        { //General Case
            front++;
        }
    }
}

void printCQueue(){
    if ((front == -1) || (rear == -1))
    {
       printf("\nQueue UnderFlow");
    }
    
    else if (front > rear) //When Rear is behind front we print in 2 steps
    {
        for (i = front; i <= n-1; i++) //Step1 - From FRONT to n-1(end of array)
        {
            printf("|%c|",cqueue[i]);
        }
        for (i = 0; i <= rear; i++) //Step2- from i=0(start of array) to REAR
        {
            printf("|%c|",cqueue[i]);
        }
        
    }
    
    else
    {   //This includes front==rear and general case when front is ahead of rear
        for(i = front; i <= rear; i++)
		{
			printf("|%c|",cqueue[i]);		
		}		
    }
    
}

void printFrontRear(){
    printf("\nFront Is At Index : %d",front);
	printf("\nRear Is At Index : %d",rear);
}