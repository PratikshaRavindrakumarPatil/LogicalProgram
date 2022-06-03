/*
output:


|11|->|21|->|51|->|101|->
Count of node is:4

|11|->|21|->|51|->|101|->|111|->|121|->
Count of node is:6

|21|->|51|->|101|->|111|->|121|->
Count of node is:5

|21|->|51|->|101|->|111|->
Count of node is:4

|21|->|51|->|101|->|75|->|111|->
Count of node is:5

|21|->|51|->|101|->|111|->
Count of node is:4
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
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

void InsertLast(PPNODE head,int no)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	
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
	}
	
}

void DeleteFirst(PPNODE head)
{
	PNODE temp=NULL;
	temp=*head;
	
	if(temp->next==NULL)
	{
		free(temp);
		*head=NULL;
	}
	else
	{
		*head=temp->next;
		free(temp);
		
	}
}

void DeleteLast(PPNODE head)
{
	PNODE temp=NULL;
	temp=*head;
	
	if(*head==NULL)
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
		free(temp->next);
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

void InsertAtPose(PPNODE head,int no,int pos)
{
	int iSize=0;
	PNODE temp=NULL;
	iSize=Count(*head);
	
	
	if((pos<1)||(pos>(iSize+1)))
	{
		printf("Invalid position\n");
		return;
	}
	
	if(pos==1)
	{
		InsertFirst(head,no);
	}
	else if(pos==(iSize+1))
	{
		InsertLast(head,no);
	}
	else
	{
		int iCnt=0;
		PNODE newn=NULL;
		
		newn=(PNODE)malloc(sizeof(NODE));
		
		newn->data=no;
		newn->next=NULL;
		
		temp=*head;
		
		for(iCnt=1;iCnt<pos-1;iCnt++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;	
	}
	
}

void DeleteAtPos(PPNODE head,int pos)
{
	
	int iSize=0;
	PNODE temp=NULL;
	PNODE tempDelete=NULL;
	
	iSize=Count(*head);
	
	
	if((pos<1)||(pos>iSize))
	{
		printf("Invalid position\n");
		return;
	}
	
	if(pos==1)
	{
		DeleteFirst(head);
	}
	else if(pos==iSize)
	{
		DeleteLast(head);
	}
	else
	{
		int iCnt=0;
		temp=*head;
		
		
		
		for(iCnt=1;iCnt<pos-1;iCnt++)
		{
			temp=temp->next;
		}
		tempDelete=temp->next;
		
		temp->next=tempDelete->next;
		free(tempDelete);
		
	}
	
}


int main()
{
	PNODE first=NULL;
	int iRet=0;
	
	InsertFirst(&first,101);
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
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
	
	InsertAtPose(&first,75,4);
	Display(first);
	iRet=Count(first);
	printf("Count of node is:%d\n\n",iRet);
	
	DeleteAtPos(&first,4);
	Display(first);
	iRet=Count(first);
	printf("Count of node is:%d\n\n",iRet);
	
	return 0;
}







