#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head, int no)
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
		while(1)   //unconditional loop
		{
			if(temp->data == no)
			{
				cout<<"Duplicate node\n";
				
				delete newn;
				break;
			}
			else if(  no < (temp->data))  //small data
			{
				if(temp->lchild == NULL)
				{
					temp->lchild = newn;
					break;
				}
				temp = temp->lchild;
			}
			else if(no > (temp->data))  //greater data
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
	bool flag = false;
	if(Head == NULL)  ///tree is empty
	{
		return false;
	}
	else 		//atleast one node
	{
		while(Head != NULL)
		{
			if(Head->data == no) // node sapdla
			{
				flag = true;
				break;
			}
			else if(no > (Head->data))
			{
				Head = Head->rchild;
			}
			else if(no < (Head->data))
			{
				Head = Head->lchild;
			}
		}
		return falg;
	}
}

int Count(PNODE Head)
{
	static int iCnt = 0;
	
	if(Head != NULL)
	{
		iCnt++;
		Count(Head->lchild);
		Count(Head->rchild)
	}
    return iCnt;
}
int main()
{
	int no = 0, iret = 0;
	
    PNODE first = NULL;
    
    Insert(&first,51);
    Insert(&first,21);
    Insert(&first,101);
    
    iret = Count(first);
    
    return 0;
}

