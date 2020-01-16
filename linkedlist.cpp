#include<iostream> 
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node()
	{
		this->data = 0;
		next = NULL;
	}
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};
class LinkedList
{
	Node *head;
	public:
	LinkedList()
	{
		head = NULL;
	}
	void appendAtBeg(int data)
	{
		Node *new_node= new Node(data);
		Node *last = head;		
		if( head == NULL)
		{
			head = new_node;
		}
		while (last->next != NULL)  
			last = last->next;  		
		last->next = new_node;  
	}
	void push(int data)
	{
		Node *temp = new Node(data);
		temp->next = head;
		head = temp;
	}
	void display()
	{
		Node *temp;
		temp = head;
		while (temp!= NULL)
		{
			cout<<""<<temp->data<<" ";
			temp = temp->next;
		}		
		cout<<endl;		
	}
	int count()
	{
		int count=0;
		Node *temp;
		temp = head;
		while(temp!=NULL)
		{
			count++;
			temp = temp->next;
		}
		return count;
	}
	void insertAtPos(int pos,int data)
	{
		Node *temp,*newNode;
		temp = head;
		for(int i=0;i<pos;i++)
		{
			temp = temp->next;
			if(temp == NULL)
			{
				cout<<"\n Position not found"<<endl;
				return;
			}
		}
		newNode = new Node(data);
		newNode->next = temp->next;
		temp->next = newNode;
	}
	void deleteItem(int key)
	{
		Node *temp,*prev;
		temp = head;
		if( temp!=NULL && temp->data == key)
		{
			head = temp;
		}
		while(temp!=NULL && temp->data != key)
		{
			prev= temp;
			temp = temp->next;
		}
		if(temp == NULL)
			return;
		prev->next = temp->next;
	}
	
	int detectloop() 
	{
/* 		head->next->next->next= head; 
		Node *slow_p = head, *fast_p = head; 
	    while (slow_p && fast_p && fast_p->next) { 
        slow_p = slow_p->next; 
        fast_p = fast_p->next->next; 
        if (slow_p == fast_p) { 
            cout << "Found Loop at "<<slow_p->data; 
            return 1; 
        } 
		} 
		return 0;  */
		
		 // Create a temporary node 
    Node* temp = new Node; 
    while (head != NULL) { 
  
        // This condition is for the case 
        // when there is no loop 
        if (head->next == NULL) { 
            return false; 
        } 
  
        // Check if next is already 
        // pointing to temp 
        if (head->next == temp) { 
            return true; 
        } 
  
        // Store the pointer to the next node 
        // in order to get to it in the next step 
        Node* nex = head->next; 
  
        // Make next point to temp 
        head->next = temp; 
  
        // Get to the next node in the list 
        head = nex; 
    }   
    return false; 	
	}
};

int main()
{ 
	LinkedList myList;
	myList.push(10);
	myList.push(9);
	myList.push(5);
	myList.push(25);
	myList.push(32);
	myList.push(25);
	myList.push(45);
	myList.push(1);
	myList.appendAtBeg(100);
	myList.push(16);
	cout<<"Size of linkedlist:"<<myList.count()<<endl;
	myList.display(); 
	myList.insertAtPos(5,69);
	cout<<"Size of linkedlist:"<<myList.count()<<endl;
	myList.display(); 
	myList.deleteItem(1);
	myList.deleteItem(1);
	cout<<"Size of linkedlist:"<<myList.count()<<endl;
	myList.display(); 
	myList.detectloop();  
	return 0;
}