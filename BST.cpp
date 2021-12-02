#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head,int no)
{
	PNODE temp = *Head;
	PNODE newn = new NODE;

	newn->data = no;
	newn->lchild = NULL;
	newn->rchild = NULL;

	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{			
		while(1)   // unconditional loop
		{
			if(temp->data == no) // if duplicate node entered
			{
				cout<<"Duplicate node\n";
				delete newn;
				break;
			}
			else if(no < (temp->data)) // Lahan data is going to at Left of 
			{
				if(temp->lchild == NULL)
				{
					temp->lchild = newn;
					break;
				}
				temp = temp->lchild;

			}
			else if(no > (temp->data)) // Motha data is going to Right of node
			{
				if(temp->rchild == NULL)
				{
					temp->rchild = newn;
					break;
				}
				temp = temp->rchild;
			}
		}
	}
}

bool Search(PNODE Head, int no)
{
	//bool flag = false;
	if(Head == NULL) // If Tree is empty
	{
		return false; //OR return flag;
	}
	else   // Tree contains atleast one node
	{
		while(Head != NULL)
		{
			if(Head->data == no) // node sapdla/node founds
			{
				//flag = true;
				break;
			}
			else if( no > (Head->data))
			{
				Head = Head->rchild;
			}
			else if( no < (Head->data))
			{
				Head = Head->lchild;
			}
		}
		//return flag;
		if(Head == NULL)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

int Count(PNODE Head)
{
	static int iCnt = 0;

	if(Head != NULL)
	{
		iCnt++;
		Count(Head->lchild);
		Count(Head->rchild);
	}
	return iCnt;
}

int CountLeaf(PNODE Head)
{
	static int iCnt = 0;

	if(Head != NULL)
	{
		if((Head->lchild == NULL)&&(Head->rchild == NULL))
		{
			iCnt++;
		}
		CountLeaf(Head->lchild);
		CountLeaf(Head->rchild);
	}
	return iCnt;
}

int CountParent(PNODE Head)
{
	static int iCnt = 0;

	if(Head != NULL)
	{
		if((Head->lchild != NULL)||(Head->rchild != NULL))
		{
			iCnt++;
		}
		CountParent(Head->lchild);
		CountParent(Head->rchild);
	}
	return iCnt;
}

void Inorder(PNODE Head) // LDR
{
	if(Head!=NULL)
	{
		Inorder(Head->lchild);// L
		cout<<Head->data<<"\n"; // D
		Inorder(Head->rchild); // R
	}

}

void Postorder(PNODE Head) // LRD
{
	if(Head!=NULL)
	{
		Postorder(Head->lchild);// L
		Postorder(Head->rchild); // R
		cout<<Head->data<<"\n"; // D
	}

}

void Preorder(PNODE Head) // DLR
{
	if(Head!=NULL)
	{
		cout<<Head->data<<"\n"; // D
		Preorder(Head->lchild);// L
		Preorder(Head->rchild); // R
	}

}

int main()
{
	int no = 0, iret = 0;
	bool bret = false;

	PNODE first = NULL;
	Insert(&first,51);
	Insert(&first,21);
	Insert(&first,101);

	iret = Count(first);
	cout<<"Number of Nodes are:"<<iret<<"\n";
	
	iret = CountLeaf(first);
	cout<<"Number of LeafNodes are:"<<iret<<"\n";

	iret = CountParent(first);
	cout<<"Number of ParentNodes are:"<<iret<<"\n";

	cout<<"Enter number to search\n";
	cin>>no;
	bret = Search(first,no);
	if(bret == true)
	{
		cout<<"Yes Number is there!!!\n";
	}
	else
	{
		cout<<"Yes Number is Not there!!!\n";
	}
	
	cout<<"Inorder\n";
	Inorder(first);
	cout<<"Preorder\n";
	Preorder(first);
	cout<<"Postorder\n";
	Postorder(first);

	return 0;
}
