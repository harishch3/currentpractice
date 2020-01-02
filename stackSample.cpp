#include<iostream>
#define MAX_ELE 100
using namespace std;

class stack
{
int arr[100];
public:
int top;
stack()
{
top = -1;
}
bool push(int x);
int pop();
int peek();
bool isEmpty();
bool isFull();
};
bool isEmpty()
{
if()
}
bool stack::push(int x)
{
if(top == MAX_ELE)
{
cout<<"\n stack is full"<<endl;
return false;
}
arr[++top] = x;
cout<<"top pos:"<<top<<" Ele:"<<x<<endl;
return true;
}

int stack::pop()
{
if(top == -1)
{
cout<<"\n No ele in stack"<<endl;
}
return arr[top--];
}

int stack::peek()
{
return arr[top];
}

int main()
{
stack s1;
s1.push(12);
s1.push(13);
s1.push(14);
s1.push(15);
s1.push(16);
s1.push(17);
s1.push(18);
cout<<"Top ele:"<<s1.peek()<<endl;
cout<<"REmoving top element:"<<s1.pop()<<endl;
cout<<"Top ele:"<<s1.peek()<<endl;
return 0;
}
