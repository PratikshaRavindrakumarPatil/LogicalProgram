/*
OUTPUT:

Nodes are:|10|->|20|->|40|->|30|->NULL

Summation of all node is:100


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
	printf("Nodes are:");
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}

int Addition(PNODE head)
{
	int iSum=0;
	while(head!=NULL)
	{
		iSum=iSum+(head->data);
		head=head->next;
	}
	return iSum;
}
int main()
{
	PNODE first=NULL;
	int iRet=0;
	
	

	InsertFirst(&first,30);
	InsertFirst(&first,40);
	InsertFirst(&first,20);
	InsertFirst(&first,10);

	Display(first);
	
	iRet=Addition(first);
	printf("\nSummation of all node is:%d\n",iRet);
	
	
	return 0;
}