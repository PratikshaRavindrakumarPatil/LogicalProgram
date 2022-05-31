/*
OUTPUT:

Nodes are:|210|->|120|->|340|->|230|->NULL

Maximum node is:340


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

int Maximum(PNODE head)
{
	int iMax=0;
	iMax=head->data;
	while(head!=NULL)
	{
		
		if(iMax<(head->data))
		{
			iMax=head->data;
			
		}
		head=head->next;
	}
	return iMax;
}
int main()
{
	PNODE first=NULL;
	int iRet=0;
	
	

	InsertFirst(&first,230);
	InsertFirst(&first,340);
	InsertFirst(&first,120);
	InsertFirst(&first,210);

	Display(first);
	
	iRet=Maximum(first);
	printf("\nMaximum node is:%d\n",iRet);
	
	
	return 0;
}