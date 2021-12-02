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
			cout<<("Invalid Position\n");
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
			cout<<("Invalid Position\n");
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
	SinglyLL obj;
    int iChoice = 1, value = 0, iRet = 0, pos = 0;
    
    while(iChoice != 0)
    {
        cout<<"\n________________________________________\n";
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
        cout<<"\n________________________________________\n";

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
                cout<<"Thank for using  LinkedList!\n";
                break;
                
            default:
                cout<<"Please enter proper choice!!!\n";
                break;
        }
    }
    
    return 0;
}
