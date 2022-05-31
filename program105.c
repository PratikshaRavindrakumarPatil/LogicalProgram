/*
(Do not consider 0)
OUTPUT:
Nodes are:
|11|->|82|->|141|->|17|->|6|->|89|->

Maximum digit of node is:
1       8       4       7       6       9
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
	printf("Nodes are:\n");
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("\n");
}

void DisplayLarge(PNODE head)
{
	int iDigit=0,iDigitMax=0;
	printf("\nMaximum digit from the node is:\n");
	while(head!=NULL)
	{
		iDigitMax=0;
		while(head->data!=0)
		{
			iDigit=(head->data)%10;

			if(iDigitMax<iDigit)
			{
				iDigitMax=iDigit;
			}
			head->data=head->data/10;		
		}
		printf("%d\t",iDigitMax);
		
		head=head->next;
		
	}
}


int main()
{
	PNODE first=NULL;
	InsertFirst(&first,89);
	InsertFirst(&first,6);
	InsertFirst(&first,17);
	InsertFirst(&first,141);
	InsertFirst(&first,82);
	InsertFirst(&first,11);
	
	Display(first);
	
	DisplayLarge(first);
	return 0;
}