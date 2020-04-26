/*
Given a singly linked list, find middle of the linked list.
For example, if given linked list is 1->2->3->4->5 then output should be 3.
If there are even nodes, then there would be two middle nodes,
we need to print first/second middle element.
For example, if given linked list is 1->2->3->4->5->6 then output should be3(traverse)/ 4(2 pointers).
*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node * next;
};


struct node * start = NULL;
struct node * last = NULL;
struct node * current = NULL;

void insertNode(int); //We Take IntegerElement From "Main" and pass into function 
void printLL(); //Print Entires LinkLIst
int midNode(); //Returns Integer i.e. integer @ Mid Of Link List
int midAlgo();

int main(){
    int n,data;
    printf("\n\tMid Element in SLL\n\n");
    printf("\nEnter No Of Nodes : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("\nEnter %d Element : ",i);
        scanf("%d",&data);
        insertNode(data); //pass data to insert function
    
    }
    printLL();
   printf("Middle Element : %d\n\n",midNode());  
   printf("Middle Element : %d\n\n",midAlgo());  
return(0);    
} 

void insertNode(int data){
    struct node * new1 = (struct node *) malloc(sizeof(struct node));
    new1 -> info = data;
    if (start == NULL)
    {
        start = new1;
        last = new1;
    }
    else
    {
        last->next = new1; //Old Last Becomes Second Last Element
        last = new1; //new1 becomes new last
    }
    last->next = NULL; //Compulsory bcoz new1 is last element of LL   
}

int midNode(){
    current = start;
    int totalNodes = 0;
    while (current!=NULL)
    {
        totalNodes++;
        current = current->next;
    }
    current = start;
    for (int i = 1; i <= totalNodes/2 ; i++)
    {
     current= current->next;     
    }
    
   return(current->info);    
}

void printLL(){
 if (start == NULL)
 {
    printf("Empty List");
 }
 else 
 { 
  current = start;
  printf("\nLink List : ");
  while (current!=NULL)
  {
      printf("%d-",current->info);
      current = current->next;
  }
  printf("NULL\n\n");  
 }


}

int midAlgo(){
    struct node * slowptr = start; //Jumps 1
    struct node * fastptr = start; //Jumps 2
    while(slowptr->next!=NULL || fastptr->next->next!=NULL){
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }
    printf("%d",slowptr->info);
    return(slowptr->info);
}