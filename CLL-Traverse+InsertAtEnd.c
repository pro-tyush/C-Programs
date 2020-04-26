
#include<stdio.h>
#include<stdlib.h>

struct node
	{
	 int info;
	 struct node*next;
	};

struct node*last=NULL;

struct node*PratyushCreateNode()
	{
	 struct node*tempnew1;
	 tempnew1 = (struct node*)malloc(sizeof (struct node));
	 return tempnew1;
	}

void PratyushInsertAtEnd()
	{
	 struct node*new1;
	 new1 = PratyushCreateNode();
	 printf("\nEnter Data - ");
	 scanf("%d",&new1->info);
	 new1->next = new1;
	
	if(last == NULL)
	 {
	  last = new1;
	 }

	else
	 {
 	  new1->next=last->next;
	  last->next=new1;
	  last = new1;
	 }	

	}

void PratyushPrint()
{
	printf("\n");
	struct node*current;
	current=last->next;
	
	if(last == NULL)
	 {
	  printf("Empty List");
	 }
	
	else
	 {
	  while(current!=last)
		{
		 printf("%d", current->info);
		 current=current->next;
		}
	 printf("%d",last->info);
	 }
	


}

void main()
{
	int ch;
	while(1)
		{
		 printf("\n");
		 printf("\nInsertion-1 \nPrint-2 \nExit-Other \n");
		 scanf("%d",&ch);
		 switch(ch)
			{
			 case 1: PratyushInsertAtEnd();
				break;
			 case 2: PratyushPrint();
				break;
			 default: exit(0);
			}
		}
}


