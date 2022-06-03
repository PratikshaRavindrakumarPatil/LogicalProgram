/*
OUTPUT:
|1|->|11|->|21|->|51|->|101|->
Count of node is:5

*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
	struct node * prv;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	newn->prv=NULL;
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		temp=*head;
		
		newn->next=temp;
		temp->prv=newn;
		*head=newn;
	}
	
}

void Display(PNODE head)
{
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("\n");
	
}

int Count(PNODE head)
{
	int iCnt=0;
	while(head!=NULL)
	{
		iCnt++;
		head=head->next;
	}
	
	return iCnt;
	
}

int main()
{
	PNODE first=NULL;
	int iRet=0;
	
	InsertFirst(&first,101);
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	InsertFirst(&first,1);
	Display(first);
	iRet=Count(first);
	printf("Count of node is:%d\n",iRet);
	
	
	return 0;
}
