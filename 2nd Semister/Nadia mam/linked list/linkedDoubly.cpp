//Doubly linked list

#include <iostream>
using namespace std ;

struct Node
{
	int data ;
	Node *previous,*next;
};

Node *head,*tail;

void createLinkedList()
{
	head=NULL;
	tail=NULL;
}

Node* createNode(int value)
{
	Node *temp= new Node();
	temp ->data=value;
	temp ->previous=NULL;
	temp ->next=NULL;
	
	return temp;
}

void insertAtBegin(Node *node)
{
	if(head == NULL && tail == NULL)
	{
		head=node;
		tail=node;
	}
	
	else 
	{
		node -> next=head;
		head -> previous=node;
		head=node;
	}
}

void insertAtEnd(Node *node)
{
	if(head == NULL && tail == NULL)
	{
		head=node;
		tail=node;
	}
	
	else
	{
		node ->previous=tail;
		//node ->next=NULL;
		tail -> next=node;
		tail=node;
		
	}
}

Node* search(int n)
{
	for(Node *currentNode=head; currentNode != NULL ; currentNode = currentNode -> next )
	{
		if(currentNode -> data == n)
		{
			return currentNode;
		}
	}
	return NULL;
}

void insertAtMiddle(Node *node)
{
	int input;
	cout << "Enter Your middle input: " ;
	cin >> input;
	
	Node *newNode=createNode(input);
	
	newNode -> previous = node ;
	newNode -> next = node -> next;
	node -> next -> previous =newNode;
	node -> next = newNode;
}

void Delete(Node *node)
{
	node -> next -> previous=node -> previous;
	node -> previous -> next = node -> next;
	
	delete(node);
}

void TraverseForward()
{
	for(Node *currentNode=head; currentNode != NULL ; currentNode = currentNode -> next )
	{
		cout << currentNode -> data << endl ;
	}
	cout << endl ;
}

void TraverseBackward()
{
	for(Node *currentNode=tail ; currentNode !=NULL ; currentNode = currentNode -> previous)
	{
		cout << currentNode -> data << endl ;
	}
	cout << endl ;
}

int main (void)
{
	cout << "Enter Your number of input: " ;
	int number,input;
	cin >> number;
	
	createLinkedList();
	
	cout << "Enter Your  input: " ;
	for(int i=0;i<number;i++)
	{
		cin >> input;
		Node *newNode=createNode(input);
		
		insertAtEnd(newNode);
	}
	
	while(true)
	{
	
		int choice ;
		cout << "1.Insert at Begin\n2.Insert at End\n3.Insert at middle\n4.TraverseForward\n5.TraverseBackward\n6.Delete\n7.Exit" << endl << endl;
		cout << "Enter Your choice: " ;
	
		cin >> choice ;
		
		if(choice == 1)
		{
			int input;
			cout << "Enter Your new input: " ;
			cin >> input;
	
			Node *newNode=createNode(input);
			insertAtBegin(newNode);
		
		}
		
		else if(choice == 2)
		{
			int value;
			cout << "Enter Your  input: " ;
			cin >> value;
			
			Node *newNode=createNode(value);
		
			insertAtEnd(newNode);
		}
	
		else if(choice == 3)
		{
			int value;
			cout << "Enter Your previous input: " ;
			cin >> value;
			
			insertAtMiddle(search(value));	
		}
		else if (choice == 4) TraverseForward();
		
		else if (choice == 5) TraverseBackward();
		
		else if(choice == 6)
		{
			int value;
			cout << "Enter Your deleting input: " ;
			cin >> value;	
			
			Delete (search(value));
		}
		
		else break ;
	}
	
	return 0;
}
