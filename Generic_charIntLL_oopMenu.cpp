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

///////////////////////////////////--Main Function--/////////////////////////////////////

int main()
{   
	SinglyLL <int>obj;
	SinglyLL <char>obj1;
    int iOpt=0,iChoice = 0, value = 0, iRet = 0, pos = 0;
    char ch ='\0';

    cout<<"Enter choice:\n1.Integer LinkedList\n2.Character LinkedList \n:";
    cin>>iOpt;
    
    if(iOpt == 1)
    {
	    while(iOpt != 0)
	    {
	        cout<<"\n_____________________Integer LinkedList_____________________________\n";
	        cout<<"Enter the desired operation that you want to perform on LinkedList\n";
	        cout<<"1 : Insert the node at first position\n";
	        cout<<"2 : Insert the node at last position\n";
	        cout<<"3 : Insert the node at  the desired position\n";
	        cout<<"4 : Delete the first node\n";
	        cout<<"5 : Delete the last node\n";
	        cout<<"6 : Delete the node at desired position\n";
	        cout<<"7 : Display the contents of linked list\n";
	        cout<<"8 : Count the number of nodes from linked list\n";
	        cout<<"0 : Terminate the application\n";
	        cout<<"\n______________________Integer LinkedList__________________________\n";

	      cin>>iChoice;

	        switch(iChoice)
	        {
	            case 1:
	                cout<<"Enter the data to insert:\n";
	                cin>>value;
	                obj.InsertFirst(value);;
	                break;
	                
	            case 2:
	                cout<<"Enter the data to insert:\n";
	                cin>>value;
	                obj.InsertLast(value);
	                break;
	                
	            case 3:
	                cout<<"Enter the data to insert:\n";
	                cin>>value;
	                cout<<"Enter the position:\n";
	                cin>>pos;
	                obj.InsertAtPos(value,pos);
	                break;
	                
	            case 4:
	                obj.DeleteFirst();
	                break;
	                
	            case 5:
	                obj.DeleteLast();
	                break;
	                
	            case 6 :
	                cout<<"Enter the position:\n";
	                cin>>pos;
	                obj.DeleteAtPos(pos);
	                break;
	                
	            case 7:
	                cout<<"Elemenet of Linked list are:\n";
	                obj.Display();
	                break;
	                
	            case 8:
	                iRet = obj.Count();
	                cout<<"Number of elements are :"<<iRet<<"\n";
	                break;
	                
	            case 0:
	                cout<<"Thanks for using LinkedList of Integer!\n";
	                break;
	               
	                
	            default:
	                cout<<"Please enter proper operation choice!!!\n";
	                break;
	        }
	    }
	}
	
	else if(iOpt == 2)
	{
		while(iOpt != 0)
	    {
	        cout<<"\n__________________________Character LinkedList__________________\n";
	        cout<<"Enter the desired operation that you want to perform on LinkedList\n";
	        cout<<"1 : Insert the node at first position\n";
	        cout<<"2 : Insert the node at last position\n";
	        cout<<"3 : Insert the node at  the desired position\n";
	        cout<<"4 : Delete the first node\n";
	        cout<<"5 : Delete the last node\n";
	        cout<<"6 : Delete the node at desired position\n";
	        cout<<"7 : Display the contents of linked list\n";
	        cout<<"8 : Count the number of nodes from linked list\n";
	        cout<<"0 : Terminate the application\n";
	        cout<<"\n___________________________Character LinkedList___________________\n";

	      cin>>iChoice;

	        switch(iChoice)
	        {
	            case 1:
	                cout<<"Enter the data to insert:\n";
	                cin>>ch;
	                obj1.InsertFirst(ch);;
	                break;
	                
	            case 2:
	                cout<<"Enter the data to insert:\n";
	                cin>>ch;
	                obj1.InsertLast(ch);
	                break;
	                
	            case 3:
	                cout<<"Enter the data to insert:\n";
	                cin>>ch;
	                cout<<"Enter the position:\n";
	                cin>>pos;
	                obj1.InsertAtPos(ch,pos);
	                break;
	                
	            case 4:
	                obj1.DeleteFirst();
	                break;
	                
	            case 5:
	                obj1.DeleteLast();
	                break;
	                
	            case 6 :
	                cout<<"Enter the position:\n";
	                cin>>pos;
	                obj1.DeleteAtPos(pos);
	                break;
	                
	            case 7:
	                cout<<"Elemenet of Linked list are:\n";
	                obj1.Display();
	                break;
	                
	            case 8:
	                iRet = obj1.Count();
	                cout<<"Number of elements are :"<<iRet<<"\n";
	                break;
	                
	            case 0:
	                cout<<"Thanks for using  LinkedList of Character!\n";
	                break;
	                
	            default:
	                cout<<"Please enter proper operation choice!!!\n";
	                break;
	        }
	    }
	}
	else
	{
		cout<<"Please enter proper datatype choice!!!\n";
		
	}
    
    return 0;
}