#include <stdio.h>
#include <stdlib.h>

int stack[100];
int n = 100;
int top = -1;
int item;

void pop(void); //Not needed if main at last
void push(void);
void print(void);

void main()
	{
	 int ch;
	 printf("\nWelcome To Stack Program Using Array\n");
	 printf("\nPush-1 \nPop-2 \nPrint-3 \nExit-4\n");
	 while(1)
          {
	   printf("\nEnter Choice : ");
	   scanf("%d",&ch);
	   
	   switch(ch)
		{
		 case 1: push();
		  break;
		 case 2: pop();
		  break;
		 case 3: print();
		  break;
		 case 4: exit(0);
		  break;
		 default: printf("\nInvalid Input\n");

		}	 
          }
	
	}


void push()
	{
	 if(top==n-1)
	  {
	    printf("Stack OverFlow\n");
	  }
	
	 else
	  {
           top=top+1;
	   printf("\nEnter Integer Value To Be Pushed - ");
	   scanf("%d",&item);
	   stack[top]=item;
	  }
	
	}


void pop()
	{
	 if(top == -1)
	  printf("Stack UnderFlow\n");
	 
	 else
	 {
	  printf("\nPopped Item Is - %d\n",stack[top]);
	  top=top-1;	
	 }
	}

void print()
	{
	 int i;
	 
         if(top==-1)
	  printf("Stack UnderFlow\n");
	 
	 else
	 {
	  for(i=top;i>=0;i--) //In Correct LiFo Order
	  {
	   printf("\n%d\n",stack[i]);
	  } 
	 }
	
	}





