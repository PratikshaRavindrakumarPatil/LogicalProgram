/*
OUTPUT:

|11|->|21|->|51|->|101|->
Total nodes are:4

|11|->|21|->|51|->|101|->|111|->|121|->
Total nodes are:6


|21|->|51|->|101|->|111|->|121|->
Total nodes are:5


|21|->|51|->|101|->|111|->
Total nodes are:4

|21|->|51|->|101|->|75|->|111|->
Total nodes are:5

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
		void InsertLast(int);
		void InsertAtPos(int,int);
		void DeleteFirst();
		void DeleteLast();
		void Display();
		int Count();
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

void SinglyLL::InsertLast(int no)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	newn=new NODE;
	
	newn->data=no;
	newn->next=NULL;
	
	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
	
}

void SinglyLL::DeleteFirst()
{
	PNODE temp=NULL;
	temp=head;
	
	if(temp==NULL)
	{
		return;
	}
	else
	{
		head=temp->next;
		delete temp;
		
	}
}

void SinglyLL::DeleteLast()
{
	PNODE temp=NULL;
	temp=head;
	
	if(temp==NULL)
	{
		return;
	}
	
	if(temp->next==NULL)
	{
		delete temp;
		head=NULL;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=NULL;
		delete temp->next;
		
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


int SinglyLL::Count()
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

void SinglyLL::InsertAtPos(int no,int pos)
{
	int size=0;
	int iCnt=0;
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	size=Count();
	
	if((pos<1)||(pos>size+1))
	{
		cout<<"Invalid position"<<endl;
		return;
	}
	
	if(pos==1)
	{
		InsertFirst(no);
	}
	else if(pos==size+1)
	{
		InsertLast(no);
	}
	else
	{
		newn=new NODE;
		
		newn->data=no;
		newn->next=NULL;
		
		temp=head;
		for(iCnt=1;iCnt<pos-1;iCnt++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;
		
	}
	
}


int main()
{
	SinglyLL sobj;
	int iRet=0;
	
	sobj.InsertFirst(101);
	sobj.InsertFirst(51);
	sobj.InsertFirst(21);
	sobj.InsertFirst(11);
	sobj.Display();
	iRet=sobj.Count();
	cout<<"Total nodes are:"<<iRet<<endl<<endl;
	
	sobj.InsertLast(111);
	sobj.InsertLast(121);
	sobj.Display();
	iRet=sobj.Count();
	cout<<"Total nodes are:"<<iRet<<endl<<endl;
	
	
	sobj.DeleteFirst();
	sobj.Display();
	iRet=sobj.Count();
	cout<<"Total nodes are:"<<iRet<<endl<<endl;
	
	
	sobj.DeleteLast();
	sobj.Display();
	iRet=sobj.Count();
	cout<<"Total nodes are:"<<iRet<<endl<<endl;
	
	
	sobj.InsertAtPos(75,4);
	sobj.Display();
	iRet=sobj.Count();
	cout<<"Total nodes are:"<<iRet<<endl<<endl;
	
	
	
	
	return 0;
}