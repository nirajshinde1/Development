#include<iostream>
using namespace std;

template <typename T>
struct node
{
	T data;
	struct node *next;
};



template <class T>
class SinglyLL
{
private:
	node<T> * first;
	int size;

public:
	SinglyLL();
	void InsertFirst(T);
	void InsertLast(T);
	void InsertAtPos(T ,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	void Display();
	int Count();
};

template <class T>
SinglyLL<T>::SinglyLL()
{
	first = NULL;
	size = 0;
}

template <class T>
void SinglyLL<T>::InsertFirst(T no)
   {
        node <T> * newn = new node<T>;  // newn = (PNODE)malloc(sizeof(NODE))
       
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

template <class T>
void SinglyLL<T>::InsertLast(T no)
{
	node<T> * newn = new node<T>;//in C: newn = (struct struct node *)malloc(sizeof(struct node));
	
	newn->data = no;
	newn->next = NULL;

	if(first == NULL)
	{
		first = newn;
	}
	else
	{
		node<T> * temp = first;

		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
	size++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T no, int iPos)
{
	node<T> * newn = NULL;
	node<T> * temp = first;
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
		newn = new node<T>;

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

template <class T>
void SinglyLL<T>::DeleteFirst()
{
	node<T> * temp = first;
	if(first != NULL)
	{
		first = first->next;
		delete temp;

		size--;
	}
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
	node<T> * temp = first;
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

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
	node<T> * temp = first;
	node<T> * targeted = NULL;
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

template <class T>
void SinglyLL<T>::Display()
{
	node<T> * temp = first;
	while(temp != NULL)
	{
		cout<<"|"<<temp->data<<"|->";
		temp = temp->next;
	}	
	cout<<"NULL\n";
}

template <class T>
int SinglyLL<T>::Count()
{
	return size;
}

//////////////////////////////////////--main--/////////////////////////////////////

int main()
{
	int iRet = 0;

	SinglyLL <int>obj;


	cout<<"---------------LinkedList------------\n";
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.Display();
	iRet= obj.Count();
	cout<<"Number of elements are:"<<iRet<<"\n";
	
	cout<<"-------------------------------------\n";
	cout<<"After Insert 101 and 111 struct nodes at Last:\n";
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