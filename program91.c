/*
OUTPUT:
Nodes are:|10|->|20|->|40|->|30|->|60|->|70|->NULL

Element:30
first occured at:4



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

int SearchFirstOcc(PNODE head,int no)
{
	int iCnt=0;
	while(head!=NULL)
	{
		
		iCnt++;
		if(head->data==no)
		{
			printf("\nElement:%d",head->data);
			break;
		}
		head=head->next;
	}
	return iCnt;
}
int main()
{
	PNODE first=NULL;
	int iRet=0;
	
	
	InsertFirst(&first,70);
	InsertFirst(&first,60);
	InsertFirst(&first,30);
	InsertFirst(&first,40);
	InsertFirst(&first,20);
	InsertFirst(&first,10);

	Display(first);
	
	iRet=SearchFirstOcc(first,30);
	printf("\nfirst occured at:%d\n",iRet);
	
	
	return 0;
}