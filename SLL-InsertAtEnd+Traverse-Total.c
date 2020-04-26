#include <stdio.h>
#include <stdlib.h>

struct node
	{
	int info;
	struct node*next;
	};

struct node*start = NULL;
struct node*last = NULL;


struct node*PratyushCreateNode()
{
	struct node*tempnew;
	tempnew=(struct node*)malloc(sizeof (struct node));
	return(tempnew);

}

void PratyushInsertAtEnd()
{
	struct node*new1;
	new1=PratyushCreateNode();
	printf("\nEnter Amount Of Item - ");
	scanf("%d",&new1->info);
	new1->next = NULL;
	
	if(start == NULL)
		{
			start = new1;
			last = new1;
		}
	else
		{
			last->next = new1;
			last = new1;
		}



	

}

void PratyushPrintTotal()
{
	int total = 0;
	struct node*current;
	current=start;
	
	if(start==NULL)
	{
	 printf("Empty List");
	}
	
	else
	{
	 while(current!=NULL)
		{
		 total=total+current->info;
		 current=current->next;
		}
	printf("\n Total Is - %d", total);
	
	}		
	
	
}


void main()
{
int ch;
while(1)
	{	
         printf("\n");
         printf("\n1-Add Item \n2-Print Total \nOther-Exit \n =>");
         scanf("%d",&ch);

  	 switch(ch)
		{
		 case 1: PratyushInsertAtEnd();
		 break;
		 case 2: PratyushPrintTotal();
		 break;
		 default: exit(0);
		}



	}
}
