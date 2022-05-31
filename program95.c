/*
OUTPUT:

Nodes are:|210|->|120|->|340|->|230|->NULL

Minimum node is:120


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

int Minimum(PNODE head)
{
	int iMin=0;
	iMin=head->data;
	while(head!=NULL)
	{
		
		if(iMin>(head->data))
		{
			iMin=head->data;
			
		}
		head=head->next;
	}
	return iMin;
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
	
	iRet=Minimum(first);
	printf("\nMinimum node is:%d\n",iRet);
	
	
	return 0;
}