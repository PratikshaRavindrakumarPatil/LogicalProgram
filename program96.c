/*
Display Perfect number
OUTPUT:

Nodes are:
|21|->|6|->|68|->|12|->|28|->|89|->

6       28

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

void Perfect(PNODE head)
{
	int iCnt=0,iSum=0;
	
	while(head!=NULL)
	{
		iSum=0;
		for(iCnt=1;iCnt<=((head->data)/2);iCnt++)
		{
			if((head->data)%iCnt==0)
			{
				iSum=iSum+iCnt;
				//printf("%d",iCnt);
			}
			
		}
		
		if(iSum==head->data)
		{
			printf("%d\t",head->data);
		}
			
		head=head->next;
	}
}


int main()
{
	PNODE first=NULL;
	
	InsertFirst(&first,89);
	InsertFirst(&first,28);
	InsertFirst(&first,12);
	InsertFirst(&first,68);
	InsertFirst(&first,6);
	InsertFirst(&first,21);
	
	Display(first);
	
	Perfect(first);
	
	return 0;
}