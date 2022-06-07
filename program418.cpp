/*
OUTPUT:
|1|->|11|->|21|->|51|->|101|->
Total node are:5

|1|->|11|->|21|->|51|->|101|->|111|->|121|->
Total node are:7


|11|->|21|->|51|->|101|->|111|->|121|->
Total node are:6

|11|->|21|->|51|->|101|->|111|->
Total node are:5

|11|->|21|->|51|->|75|->|101|->|111|->
Total node are:6

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
		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int,int);
		void DeleteFirst();
		void DeleteLast();
		void Display();
		int Count();
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

void SinglyCLL::InsertLast(int no)
{
	PNODE newn=NULL;

	newn=new NODE;
	
	newn->data=no;
	newn->next=NULL;
	
	if((head==NULL)&&(tail==NULL))
	{
		head=newn;
		tail=newn;
	}
	else
	{
		tail->next=newn;
		tail=newn;
	}
	tail->next=head;
}

void SinglyCLL::DeleteFirst()
{
	if(head==NULL && tail==NULL)
	{
		return;
	}
	else if(head==tail)
	{
		delete head;
		head=NULL;
		tail=NULL;
	}
	else
	{
		head=head->next;
		delete tail->next;
		tail->next=head;
		
	}
		
	
}


void SinglyCLL::DeleteLast()
{
	if(head==NULL && tail==NULL)
	{
		return;
	}
	else if(head==tail)
	{
		delete head;
		head=NULL;
		tail=NULL;
	}
	else
	{
		PNODE temp=head;
		while(temp->next!=tail)
		{
			temp=temp->next;
		}
		
		delete tail;
		tail=temp;
		tail->next=head;
	}
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

int SinglyCLL::Count()
{
	PNODE temp=head;
	int iCnt=0;
	
	if((head==NULL)&&(tail==NULL))
	{
		return 0;
	}
	
	do
	{
		iCnt++;
		temp=temp->next;
	}while(temp!=head);
	
	return iCnt;
}

void SinglyCLL::InsertAtPos(int no,int pos)
{
	int size=0;
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
		PNODE newn=NULL;
		PNODE temp=head;
		int iCnt=0;
		
		newn=new NODE;
		
		newn->data=no;
		newn->next=NULL;
		
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
	SinglyCLL obj;
	
	int iRet=0;
	
	obj.InsertFirst(101);
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertFirst(1);
	obj.Display();
	iRet=obj.Count();
	cout<<"Total node are:"<<iRet<<endl<<endl;
	
	obj.InsertLast(111);
	obj.InsertLast(121);
	obj.Display();
	iRet=obj.Count();
	cout<<"Total node are:"<<iRet<<endl<<endl;
	
	obj.DeleteFirst();
	obj.Display();
	iRet=obj.Count();
	cout<<"Total node are:"<<iRet<<endl<<endl;
	
	
	obj.DeleteLast();
	obj.Display();
	iRet=obj.Count();
	cout<<"Total node are:"<<iRet<<endl<<endl;
	
	obj.InsertAtPos(75,4);
	obj.Display();
	iRet=obj.Count();
	cout<<"Total node are:"<<iRet<<endl<<endl;
	
	return 0;
}