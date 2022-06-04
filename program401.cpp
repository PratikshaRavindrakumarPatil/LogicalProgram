/*
OUTPUT:
|1|->|11|->|21|->|51|->|101|->
Total nodes are:5

|1|->|11|->|21|->|51|->|101|->|111|->|121|->
Total nodes are:7

|11|->|21|->|51|->|101|->|111|->|121|->
Total nodes are:6

*/
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
		void InsertLast(int);
		void DeleteFirst();
		void Display();
		int Count();
	
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

void DoublyLL::InsertLast(int no)
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
	else if(temp->next==NULL)
	{
		temp->next=newn;
		newn->prv=temp;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->prv=temp;
		
	}
	
}

void DoublyLL::DeleteFirst()
{
	PNODE temp=NULL;
	temp=head;
	
	if(temp==NULL)
	{
		return;
	}
	else if(temp->next==NULL)
	{
		delete temp;
		head=NULL;
	}
	else
	{
		temp->next->prv=head;
		head=temp->next;
		delete temp;
		
		
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

int DoublyLL::Count()
{
	PNODE temp=NULL;
	int iCnt=0;
	temp=head;
	
	while(temp!=NULL)
	{
		iCnt++;
		temp=temp->next;
	}
	return iCnt;
}


int main()
{
	DoublyLL dobj;
	int iRet=0;
	
	dobj.InsertFirst(101);
	dobj.InsertFirst(51);
	dobj.InsertFirst(21);
	dobj.InsertFirst(11);
	dobj.InsertFirst(1);
	dobj.Display();
	iRet=dobj.Count();
	cout<<"Total nodes are:"<<iRet<<endl<<endl;
	
	
	dobj.InsertLast(111);
	dobj.InsertLast(121);
	dobj.Display();
	iRet=dobj.Count();
	cout<<"Total nodes are:"<<iRet<<endl<<endl;
	
	
	dobj.DeleteFirst();
	dobj.Display();
	iRet=dobj.Count();
	cout<<"Total nodes are:"<<iRet<<endl<<endl;
	return 0;
}