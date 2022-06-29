#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
	
}
void Display(PNODE head)
{
	if(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
		
		Display(head);
	}
	
	
}


int main()
{
	PNODE first=NULL;
	
	InsertFirst(&first,121);
	InsertFirst(&first,111);
	InsertFirst(&first,101);
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	Display(first);
	
	
	return 0;
}