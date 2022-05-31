/*
OUTPUT:

Nodes are:
|110|->|6|->|68|->|7|->|40|->|23|->

Summation of all even node:224

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
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
	printf("\nNodes are:\n");
	
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("\n\n");
}

void AdditionEven(PNODE head)
{
	int iSum=0;
	while(head!=NULL)
	{
		if(((head->data)%2)==0)
		{
			iSum=iSum+(head->data);
		}
		
		head=head->next;
		
	}
	printf("Summation of all even node:%d",iSum);
}


int main()
{
	PNODE first=NULL;
	
	InsertFirst(&first,23);
	InsertFirst(&first,40);
	InsertFirst(&first,7);
	InsertFirst(&first,68);
	InsertFirst(&first,6);
	InsertFirst(&first,110);
	
	Display(first);
	
	AdditionEven(first);
	
	return 0;
}