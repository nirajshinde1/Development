#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

class SinglyLL
{
private:
	PNODE first;
	int size;

public:
	SinglyLL()
	{
		first = NULL;
		size = 0;
	}
	void InsertFirst(int no)
	{
		PNODE newn = new NODE;//in C: newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;

		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			newn->next = first;
			first = newn;
		}
		size++;
	}
	void InsertLast(int no)
	{
		PNODE newn = new NODE;//in C: newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;

		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			PNODE temp = first;

			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newn;
		}
		size++;
	}
	void InsertAtPos(int no, int iPos)
	{
		PNODE newn = NULL;
		PNODE temp = first;
		int i = 0;

		if((iPos < 1) || (iPos > size+1))	// filter for invalid position
		{
			printf("Invalid Position\n");
			return;
		}

		if(iPos == 1)	// First Position
		{
			InsertFirst(no);
		}
		else if(iPos == size+1)	// Last Position
		{
			InsertLast(no);
		}
		else	// inbetween position
		{
			newn = new(NODE);

			newn->data = no;
			newn->next = NULL;

			for(i =1; i < iPos-1; i++)
			{
				temp = temp->next;
			}
			newn->next = temp->next;
			temp->next = newn;
		}
		size++;
	}
	void DeleteFirst()
	{
		PNODE temp = first;
		if(first != NULL)
		{
			first = first->next;
			delete temp;

			size--;
		}
	}
	void DeleteLast()
	{
		PNODE temp = first;
		if(first == NULL)
		{
			return;
		}
		else if(first->next == NULL)
		{
			delete first;
			first = NULL;
			size--;
		}
		else
		{
			while(temp->next->next != NULL)
			{
				temp = temp->next;
			}
			delete temp->next;
			temp->next = NULL;
			size--;
		}

	}
	void DeleteAtPos(int iPos)
	{
		PNODE temp = first;
		PNODE targeted = NULL;
		int i = 0;

		if((iPos < 1) || (iPos > size))	// filter for invalid position
		{
			printf("Invalid Position\n");
			return;
		}

		if(iPos == 1)	// First Position
		{
			DeleteFirst();
		}
		else if(iPos == size)	// Last Position
		{
			DeleteLast();
		}
		else	// inbetween position
		{
			for(i =1; i < iPos-1; i++)
			{
				temp = temp->next;
			}
			targeted = temp->next;
			temp->next = targeted->next;
			delete(targeted);
		}
		size--;
	}
	void Display()
	{
		PNODE temp = first;
		while(temp != NULL)
		{
			cout<<"|"<<temp->data<<"|->";
			temp = temp->next;
		}	
		cout<<"NULL\n";
	}
	int Count()
	{
		return size;
	}
};

int main()
{
	int iRet = 0;

	SinglyLL obj;
	cout<<"---------------LinkedList------------\n";
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.Display();
	iRet= obj.Count();
	cout<<"Number of elements are:"<<iRet<<"\n";
	
	cout<<"-------------------------------------\n";
	cout<<"After Insert 101 and 111 nodes at Last:\n";
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.Display();
	
	iRet= obj.Count();
	cout<<"Number of elements are:"<<iRet<<"\n";
	
	cout<<"-------------------------------------\n";
	cout<<"After Insert 1 at second Position:\n";
	obj.InsertAtPos(1,2);
	obj.Display();
	
	iRet= obj.Count();
	cout<<"Number of elements are:"<<iRet<<"\n";
	
	cout<<"-------------------------------------\n";

	cout<<"After Delete first:\n";
	obj.DeleteFirst();
	obj.Display();

	iRet= obj.Count();
	cout<<"Number of elements are:"<<iRet<<"\n";
	
	cout<<"-------------------------------------\n";
	cout<<"After Delete Last:\n";
	obj.DeleteLast();
	obj.Display();

	iRet= obj.Count();
	cout<<"Number of elements are:"<<iRet<<"\n";
	
	cout<<"-------------------------------------\n";
	cout<<"After Delete at Position :2\n";
	obj.DeleteAtPos(2);
	obj.Display();
	
	iRet= obj.Count();
	cout<<"Number of elements are:"<<iRet<<"\n";

	return 0;
}