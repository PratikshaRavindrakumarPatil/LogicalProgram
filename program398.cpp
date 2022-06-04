#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
	struct node *prv;
};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyLL
{
	private:
		PNODE head;
		
	public:
		DoublyLL();
		void InsertFirst(int);
		void Display();
		
	
};

DoublyLL::DoublyLL()
{
	head=NULL;
}

void DoublyLL::InsertFirst(int no)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	newn=new NODE;
	
	newn->next=NULL;
	newn->prv=NULL;
	newn->data=no;
	
	
	temp=head;
	if(temp==NULL)
	{
		head=newn;
	}
	else
	{
		newn->next=temp;
		temp->prv=newn;
		head=newn;
	}
}

void DoublyLL::Display()
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
	DoublyLL dobj;
	
	dobj.InsertFirst(101);
	dobj.InsertFirst(51);
	dobj.InsertFirst(21);
	dobj.InsertFirst(11);
	dobj.InsertFirst(1);
	dobj.Display();
	
	
	return 0;
}