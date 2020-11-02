#include <iostream>
using namespace std ;

struct Node
{
	int data;
	Node *right,*left;
};

Node *root=NULL;

Node* searchNode(int value,Node * root)
{
	if( value >=root->data )
	{
		if(root->right==NULL) return root;
		
		 searchNode(value,root->right);
	}
	
	else
	{
		if(root->left==NULL) return root;
		
		 searchNode(value,root->left);
	}
}

void insert(Node *node,int value)
{
	if(root==NULL)
	{
		root=node;
		return;
	}
	
	Node *t=searchNode(value,root);
	
	if(t->data <value)
		t->right=node;
	
	else
		t->left=node;	
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

void inOrder(Node *r)
{
	if(r==NULL) return;
	inOrder(r->left);
	 
	cout << r->data << endl;
	
	inOrder(r->right);
	
}


int main (void)
{
	int item;
	
	while(cin>>item)
	{
		if(item==0) break;
		Node *newNode=new Node();
		newNode->data=item;
		newNode->right=NULL;
		newNode->left=NULL;
		
		insert(newNode,item);
		
	}
	cout << endl;
	inOrder(root);
	cout << endl<<endl;
	traversal_Preo(root);
	cout << endl<<endl;
	traversal_Posto(root);
	return 0;
}
