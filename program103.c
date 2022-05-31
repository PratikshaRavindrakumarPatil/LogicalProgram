/*
(Do not consider 0)
OUTPUT:
Nodes are:
|11|->|80|->|141|->|17|->|6|->|89|->

Product of node of digit are:
1       8       4       7       6       72
	
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

void DisplayProduct(PNODE head)
{
	int iDigit=0,iMult=1;
	printf("\nProduct of node of digit are:\n");
	while(head!=NULL)
	{
		iMult=1;
		while(head->data!=0)
		
		{
			iDigit=(head->data)%10;
			if(iDigit==0)
			{
				iDigit=1;	
			}
			iMult=iMult*iDigit;
			head->data=(head->data)/10;
		}
		printf("%d\t",iMult);
		
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
	InsertFirst(&first,80);
	InsertFirst(&first,11);
	
	Display(first);
	
	DisplayProduct(first);
	return 0;
}