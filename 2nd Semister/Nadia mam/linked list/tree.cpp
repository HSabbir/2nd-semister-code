#include <iostream>
using namespace std ;

struct Node
{
	int data;
	Node *right,*left;
};

Node *root=NULL;

Node* search(int value,Node * rt)
{
	if( value >= rt->data )
	{
		if(rt->right==NULL) return rt;
		
		search(value,rt->right);
	}
	
	else
	{
		if(rt->left==NULL) return rt;
		
		search(value,rt->left);
	}
}

void insert(Node *node,int value)
{
	if(root==NULL)
	{
		root=node;
		return;
	}
	
	Node *temp=search(value,root);
	
	if(temp->data <value)
		temp->right=node;
	
	else
		temp->left=node;	
}

void traversal_Preo(Node *r)
{
	if(r==NULL) return;
	cout << r->data << endl;
	traversal_Preo(r->left);
	traversal_Preo(r->right);
}

void traversal_Posto(Node *r)
{
	if(r==NULL) return ;
	traversal_Posto(r->left);
	traversal_Posto(r->right);
	cout << r->data << endl ;
	
}

void traversal_Ino(Node *r)
{
	if(r==NULL) return;
	 traversal_Ino(r->left);
	 
	cout << r->data << endl;
	
	traversal_Ino(r->right);
	
}

Node* createNode(int input)
{
	Node *temp=new Node();
	temp->data=input;
	temp->left=NULL;
	temp->right=NULL;
	
	return temp;
}

int main (void)
{
	int input;
	cin >> input;
	
	while(input !=0)
	{
		Node *newNode=createNode(input);
		insert(newNode,input);
		cin >> input;
	}
	cout << endl;
	traversal_Ino(root);
	cout << endl<<endl;
	traversal_Preo(root);
	cout << endl<<endl;
	traversal_Posto(root);
	return 0;
}
