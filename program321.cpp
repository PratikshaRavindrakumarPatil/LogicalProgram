#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


class SinglyLL
{
	private:
		PNODE head;
	
	public:
		SinglyLL();
		void InsertFirst(int no);
		void InsertLast(int no);
		void InsertAtPos(int no,int pos);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int pos);
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
	
	temp=head;
	
	if(temp->next==NULL)
	{
		head=newn;
	}
	else
	{
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
	
	if(temp->next==NULL)
	{
		delete temp;
		head=NULL;
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
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		
		delete temp->next->next;
		temp->next=NULL;
	}
	
}

void SinglyLL::Display()
{
	
	PNODE temp=NULL;
	temp=head;
	while(temp!=NULL)
	{
		cout<<"|"<<temp->data<<"|"<<"->";
		temp=temp->next;
	}
	cout<<endl;
}


int SinglyLL::Count()
{
	int iCnt=0;
	PNODE temp=NULL;
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
	PNODE temp=NULL;
	PNODE newn=NULL;
	int iCnt=0;
	
	
	size=Count();
	
	if((pos<1)||(pos>(size+1)))
	{
		cout<<"Invalid position"<<endl;
		return;
	}
	
	if(pos==1)
	{
		InsertFirst(no);
	}
	else if(pos==(size+1))
	{
		InsertLast(no);
	}
	else
	{	
		newn=new NODE;
		
		newn->data=no;
		newn->next=NULL;
		
		
		temp=head;
		
		for(iCnt=1;iCnt<(pos-1);iCnt++)
		{
			temp=temp->next;
		}
	
		newn->next=temp->next;
		temp->next=newn;
	}
	
}

void SinglyLL::DeleteAtPos(int pos)
{
	int size=0,iCnt=0;
	PNODE temp=NULL;
	PNODE tempDelete=NULL;
	
	size=Count();
	
	if((pos<1)||(pos>size))
	{
		cout<<"Invalid position"<<endl;
		return;
	}
	
	if(pos==1)
	{
		DeleteFirst();
	}
	else if(pos==size)
	{
		DeleteLast();
	}
	else
	{
		temp=head;
		
		for(iCnt=1;iCnt<(pos-1);iCnt++)
		{
			temp=temp->next;
		}
		tempDelete=temp->next;
		temp->next=tempDelete->next;
		delete tempDelete;
		
		
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
	cout<<"Count of node is:"<<iRet<<endl<<endl;
	
	
	sobj.InsertLast(121);
	sobj.InsertLast(151);
	sobj.Display();
	iRet=sobj.Count();
	cout<<"Count of node is:"<<iRet<<endl<<endl;
	
	sobj.DeleteFirst();
	sobj.Display();
	iRet=sobj.Count();
	cout<<"Count of node is:"<<iRet<<endl<<endl;
	
	sobj.DeleteLast();
	sobj.Display();
	iRet=sobj.Count();
	cout<<"Count of node is:"<<iRet<<endl<<endl;
	
	
	sobj.InsertAtPos(75,4);
	sobj.Display();
	iRet=sobj.Count();
	cout<<"Count of node is:"<<iRet<<endl<<endl;
	
	sobj.DeleteAtPos(4);
	sobj.Display();
	iRet=sobj.Count();
	cout<<"Count of node is:"<<iRet<<endl<<endl;
	
	
	return 0;
}