#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class SinglyCirLL
{
private:
	PNODE first;
	PNODE last;
	int size;

public:
	SinglyCirLL()
	{
		first = NULL;
		last = NULL;
		size = 0;
	}
	void InsertFirst(int no)
	{
		PNODE newn = new NODE;
		newn->data = no;
		newn->next = NULL;
		if((first == NULL) && (last == NULL))
		{
			first = newn;
			last = newn;
		} 
		else
		{
			newn->next = first;
			first = newn;
		}

		last->next = first;
		size++;
	}
	void InsertLast(int no)
	{
		PNODE newn = new NODE;
		newn->data = no;
		newn->next = NULL;
		if((first == NULL) && (last == NULL))
		{
			first = newn;
			last = newn;
		} 
		else
		{
			last->next = newn;
			last = newn;
		}
		
		last->next = first;
		size++;
	}
	void InsertAtPos(int no, int iPos)
	{
		if((iPos < 1) || (iPos > (size+1)))
		{
			return;
		}
		if(iPos == 1)
		{
			InsertFirst(no);
		}
		else if(iPos == (size+1))
		{
			InsertLast(no);
		}
		else
		{
			PNODE newn = new NODE;
			newn->data = no;
			newn->next = NULL;

			PNODE temp = first;
			for(int i = 1;i < iPos-1;i++)
			{
				temp = temp->next;
			}
			newn->next = temp->next;
			temp->next = newn;

			size++;
		}
	}
	void DeleteFirst()
	{
		if((first == NULL) && (last == NULL))
		{
			return;
		}
		else if(first == last)
		{
			delete first;
			first = NULL;
			last = NULL;
		}
		else
		{
			first= first->next;
			delete last->next;
			last->next = first;
		}
		size--;
	}
	void DeleteLast()
	{
		PNODE temp = first;
		if((first == NULL) && (last == NULL))
		{
			return;
		}
		else if(first == last)
		{
			delete first;
			first = NULL;
			last = NULL;
		}
		else
		{
			while(temp->next != last)
			{
				temp = temp->next;
			}
			delete last;
			last = temp;
		}
		size--;
	}
	void DeleteAtPos(int iPos)
	{
		if((iPos < 1)||(iPos > size))
		{
			return;
		}

		if(iPos == 1)
		{
			DeleteFirst();
		}
		else if(iPos == size)
		{
			DeleteLast();
		}
		else
		{
			PNODE temp = first;
			for(int i = 1;i<iPos-1;i++)
			{
				temp = temp->next;
			}
			PNODE targeted = temp->next;
			temp->next = targeted->next; // OR temp->next = temp->
			delete targeted;

			size--;
		}
		
	}
	void Display()
	{
		PNODE temp = first;
		if((first == NULL) && (last == NULL))
		{
			return;
		}
		do
		{
			cout<<"|"<<temp->data<<"|"<<"->";
			temp = temp->next;

		}while(temp != last->next);
		cout<<"\n";
	}
	int Count()
	{
		return size;
	}
};

int main()
{
	int iRet = 0;

	SinglyCirLL obj;
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
	cout<<"After Delete at Position :3\n";
	obj.DeleteAtPos(3);
	obj.Display();
	
	iRet= obj.Count();
	cout<<"Number of elements are:"<<iRet<<"\n";

	return 0;
}