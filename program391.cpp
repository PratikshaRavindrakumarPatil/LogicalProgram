/*
OUTPUT:

|11|->|21|->|51|->|101|->

*/
#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node * next;
	
};

typedef struct node NODE;
typedef struct node *PNODE;


class SinglyLL
{
	private:
		PNODE head;
		
	public:
		SinglyLL();
		void InsertFirst(int);
		void Display();
	
};

SinglyLL::SinglyLL()
{
	head=NULL;
}
void SinglyLL::InsertFirst(int no)
{
	PNODE newn=NULL;
	
	newn=new NODE;
	
	newn->data=no;
	newn->next=NULL;
	
	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		newn->next=head;
		head=newn;
	}
	
}

void SinglyLL::Display()
{
	PNODE temp=NULL;
	temp=head;
	
	while(temp!=NULL)
	{
		cout<<"|"<<temp->data<<"|->";
		temp=temp->next;
	}
	cout<<endl;
}

int main()
{
	SinglyLL sobj;
	sobj.InsertFirst(101);
	sobj.InsertFirst(51);
	sobj.InsertFirst(21);
	sobj.InsertFirst(11);
	sobj.Display();
	
	
	
	return 0;
}