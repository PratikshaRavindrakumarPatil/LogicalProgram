#include<iostream>
using namespace std;
struct node 
{
	int data;
	struct node * next;
	struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCLL
{
	private:
		PNODE head;
		PNODE Tail;
		int CountNode;
		
	public:
		DoublyCLL();
		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int,int);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
		void Display();
		int Count();
};

DoublyCLL::DoublyCLL()
{
	
}

void DoublyCLL::InsertFirst(int no)
{
	
}

void DoublyCLL::InsertLast(int no)
{
	
}

void DoublyCLL::InsertAtPos(int no,int pos)
{
	
}

void DoublyCLL::DeleteFirst()
{
	
}

void DoublyCLL::DeleteLast()
{
	
}

void DoublyCLL::DeleteAtPos(int pos)
{
	
}

void DoublyCLL::Display()
{
	
}

int DoublyCLL::Count()
{
	return CountNode;
}

int main()
{
	DoublyCLL obj;
	
	
	return 0;
}





























