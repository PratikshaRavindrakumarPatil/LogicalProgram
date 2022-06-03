/*
OUTPUT:
|1|->|11|->|21|->|51|->|101|->
Count of node is:5

|1|->|11|->|21|->|51|->|101|->|111|->|121|->
Count of node is:7

|11|->|21|->|51|->|101|->|111|->|121|->
Count of node is:6

|11|->|21|->|51|->|101|->|111|->
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

void InsertLast(PPNODE head,int no)
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
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->prv=temp;
	}
	
}

void DeleteFirst(PPNODE head)
{
	PNODE temp=NULL;
	temp=*head;
	
	if(temp==NULL)
	{
		return;
	}
	
	if(temp->next==NULL)
	{
		free(temp);
		*head=NULL;
	}
	else
	{
		*head=temp->next;
		free(temp);
		temp->next->prv=NULL;
	}
	
}

void DeleteLast(PPNODE head)
{
	PNODE temp=NULL;
	temp=*head;
	
	if(temp==NULL)
	{
		return;
	}
	
	if(temp->next==NULL)
	{
		free(temp);
		*head=NULL;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		
		free(temp->next->next);
		temp->next=NULL;
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
	printf("Count of node is:%d\n\n",iRet);
	
	
	InsertLast(&first,111);
	InsertLast(&first,121);
	Display(first);
	iRet=Count(first);
	printf("Count of node is:%d\n\n",iRet);
	
	
	DeleteFirst(&first);
	Display(first);
	iRet=Count(first);
	printf("Count of node is:%d\n\n",iRet);
	
	
	DeleteLast(&first);
	Display(first);
	iRet=Count(first);
	printf("Count of node is:%d\n\n",iRet);
	
	return 0;
}
