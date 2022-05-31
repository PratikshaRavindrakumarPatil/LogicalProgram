/*
(Do not consider 0)
OUTPUT:
Nodes are:
|11|->|82|->|141|->|17|->|6|->|89|->

Minimum digit from the node is:
1       2       1       1       6       8
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

void DisplaySmall(PNODE head)
{
	int iDigit=0,iDigitMin=0;
	printf("\nMinimum digit from the  node is:\n");
	while(head!=NULL)
	{
		iDigitMin=0;
		while(head->data!=0)
		{
			iDigit=(head->data)%10;
			if(iDigitMin==0)
			{
				iDigitMin=iDigit;
			}
			if(iDigitMin>iDigit)
			{
				iDigitMin=iDigit;
			}
			head->data=head->data/10;		
		}
		printf("%d\t",iDigitMin);
		
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
	
	DisplaySmall(first);
	return 0;
}