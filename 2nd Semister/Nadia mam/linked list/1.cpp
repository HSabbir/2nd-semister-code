#include <iostream>

using namespace std ;

struct node
{
	int roll;
	string name;
	node *next;
	
};

node *head=NULL ;

void add(int x,string s)
{
	if(head==NULL)
	{
		head=new node();
		head ->roll=x;
		head ->name=s;
		head ->next=NULL;
	}
	
	else
	{
		node *current_node=head;
		
		while(current_node ->next !=NULL) current_node=current_node -> next ;
		
		node *new_node = new node();
		new_node -> roll=x;
		new_node ->name=s;
		new_node -> next = NULL;
		
		current_node -> next= new_node;
	}
}

void deleteNode(int x)
{
	node *current_node=head;
	node *previous_node=NULL;
	
	while(current_node ->roll !=x)
	{
		previous_node=current_node;
		current_node=current_node ->next ;
	}
	
	if(current_node==head)
	{
		node *temp=head;
		head=head ->next;
		delete(temp);
	}
	
	else
	{
		previous_node -> next = current_node -> next ;
		delete(current_node);
	}
}

void print()
{
	node *current _node = head ;
	while(current_node != NULL) 
	{
		cout << current_node -> roll << '\t'<< current_node -> name  << '\t' << current_node << '\t' << current_node -> next << endl ;
		
		current_node = current_node -> next ;
	
	}

}

int main ()
{
	int n;
	cin >> n;
	
	for (int i=0; i<n ;i++)
	{
		int number;
		string s;
		cin >> number>> s;
		add(number,s);
	
	}
	
	print();
	cin >> n;
	deleteNode(n);
	print();
	
	return 0;
}

	
