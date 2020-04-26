#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *next;
};

struct node *top = NULL; //Global because used in all Operations
struct node *current = NULL; //Global because used in Pop And Print
struct node *new1 = NULL; //Used in Push and Pop

void push(void);
void pop(void);
void printstack(void);
void printtop(void);

void main(){	
	int choice;
	do{ printf("\nWELCOME TO STACK USING LINKED LIST\n");		
		printf("\nPush - 1 \n\nPop - 2 \n\nPrintStack - 3 \n\nPrintTop - 4 \n\nExit - 5 \n\n");
		printf("=> ");
		scanf("%d",&choice);
		switch(choice){
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: printstack();
			break;
			case 4: printtop();
			break;
			case 5: printf("\nCredits - Pratyush Sharma \n\n");
				exit(0);
			break;
			default: printf("\nInvalid Input \n\n");
			}
		printf("\n************************************************************************************************************************************************************************\n");		
	}
	while(choice != 5);	
}

void push(){    						
	int item;
	new1 = (struct node*)malloc(sizeof(struct node)); //Stack Cant OverFlow Since We Are Using Malloc and Not Array //Also this command cant be Global
	
	printf("\nEnter Integer Item - ");
	scanf("%d",&item);
	printf("\n");
	new1 -> info = item;

	if(top==NULL){
		new1 -> next = NULL;
		top = new1;
		}
	else{ //Insert at begg
		new1 -> next = top;
		top = new1; 
		}	
}

void pop(){
	new1 = (struct node*)malloc(sizeof(struct node));

	if(top==NULL)
		printf("\nStack UnderFlow\n\n");
		
	else{
		printf("\nPopped Item is - %d \n\n",top -> info);
		
		current = top;
		top = top -> next;
		
		current -> next = NULL;
		free(current);
	    }
}		
		
void printstack(){
	new1 = (struct node*)malloc(sizeof(struct node));
	if(top==NULL)
		printf("\nStack UnderFlow\n\n");
	
	else{
		current = top;		
		while(current != NULL){	
			printf("\n|    %d    |\n",current -> info);
			current = current -> next;
			}
	     }		
}		

void printtop(){
	//Prints Top Value
	new1 = (struct node*)malloc(sizeof(struct node));
		if(top==NULL)
			printf("\nStack UnderFlow\nTop Points To NULL \n\n");
		else
			printf("\nTop = %d \n\n",top -> info);		
}
