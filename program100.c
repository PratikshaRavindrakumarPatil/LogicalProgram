/*
Display addition of digit of each node
OUTPUT:

Nodes are:
|110|->|6|->|68|->|7|->|40|->|23|->

2       6       14      7       4       5

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

void SumDigit(PNODE head)
{
	int iDigit=0,iSum=0;
	while(head!=NULL)
	{
		iSum=0;
		while(head->data!=0)
		{
			iDigit=(head->data)%10;
			iSum=iSum+iDigit;
			head->data=(head->data)/10;
		}
		printf("%d\t",iSum);
		head=head->next;
	}

}


int main()
{
	PNODE first=NULL;
	
	InsertFirst(&first,23);
	InsertFirst(&first,40);
	InsertFirst(&first,7);
	InsertFirst(&first,68);
	InsertFirst(&first,6);
	InsertFirst(&first,110);
	
	Display(first);
	
	SumDigit(first);
	
	return 0;
}