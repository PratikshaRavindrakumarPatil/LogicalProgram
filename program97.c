/*
Display Prime Number

OUTPUT:

Nodes are:
|11|->|6|->|68|->|7|->|28|->|23|->


11      7       23

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

void Prime(PNODE head)
{
	int iCnt=0,Count=0;
	while(head!=NULL)
	{
		Count=0;
		for(iCnt=2;iCnt<=(head->data);iCnt++)
		{
			if(((head->data)%iCnt)==0)
			{
				Count++;
			}
		}
		if(Count==1)
		{
			printf("%d\t",head->data);
		}
		
		head=head->next;
	}
}


int main()
{
	PNODE first=NULL;
	
	InsertFirst(&first,23);
	InsertFirst(&first,28);
	InsertFirst(&first,7);
	InsertFirst(&first,68);
	InsertFirst(&first,6);
	InsertFirst(&first,11);
	
	Display(first);
	
	Prime(first);
	
	return 0;
}