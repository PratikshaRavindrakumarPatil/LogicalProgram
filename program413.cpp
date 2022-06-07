/*
OUTPUT:
|1|->|11|->|21|->|51|->|101|->


*/
#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyCLL
{
	private:
		PNODE head;
		PNODE tail;
		
	public:
		SinglyCLL();
		void InsertFirst(int no);
		void Display();
		
};


SinglyCLL::SinglyCLL()
{
	head=NULL;
	tail=NULL;
}
void SinglyCLL::InsertFirst(int no)
{
	PNODE newn=NULL;
	newn=new NODE;
	
	newn->data=no;
	newn->next=NULL;
	
	if(head==NULL)
	{
		head=newn;
		tail=newn;
	}
	else
	{
		newn->next=head;
		head=newn;
		
	}
	tail->next=head;
	
	
}
void SinglyCLL::Display()
{
	PNODE temp=head;
	if((head==NULL)||(tail==NULL))
	{
		return;
	}
	
	do
	{
		cout<<"|"<<temp->data<<"|->";
		temp=temp->next;
	}while(temp!=head);
	
	cout<<endl;
}



int main()
{
	SinglyCLL obj;
	
	obj.InsertFirst(101);
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertFirst(1);
	obj.Display();
	
	return 0;
}