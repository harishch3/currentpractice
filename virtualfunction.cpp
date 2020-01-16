#include<iostream>
#include<string>

using namespace std;

class Base
{
	int a;
	public:	
	string name;
	Base()
	{
		a = 0;
		cout<<"Base class constructor"<<endl;
	}	
	Base(int a)
	{
		this->a = a;
		cout<<"Base class parameterized constructor"<<endl;
	}
	virtual void display(){
		cout<<"Base function of display is called"<<endl;
	}
	void display1()
	{
		cout<<"Base function of display1 is called"<<endl;
	}
	void getvalue()
	{
		display();
		cout<<"a value:"<<name<<endl;
	}
	virtual void setvalue()
	{
		cout<<"setting value base"<<endl;
	}
	virtual ~Base()
	{
		cout<<"Hey i am from base destructor"<<endl;
	}	
};

class Derived : public Base
{ 
	public:
	Derived()
	{
		cout<<"Derived class constructor"<<endl;
	}
	~Derived()
	{
		cout<<"Hey i am also destructor from derived"<<endl;
	}
	Derived(int a):Base(a)
	{
		cout<<"Derived class parameterized constructor"<<endl;
	}
	void display(){
		cout<<"Derived function of display is called"<<endl;
	}
	void setvalue()
	{ 
		cout<<"setting value"<<endl;
		name += "ch";
	}
};

int main()
{ 
	{
 	Base *b1 = new Derived(20);
	b1->display();
	b1->display1();
	b1->name = "Harish"; 
	b1->setvalue();
	b1->getvalue();	
	cout<<sizeof(Base)<<endl; 
	delete b1;	
	b1 = NULL;
	//b1->getvalue(); 
	Base b;
	cout<<sizeof(b)<<endl;
	cout<<sizeof(int)<<endl;
	cout<<sizeof(string)<<endl;
	cout<<sizeof(b1)<<endl; 
	/* Base *b1; 
	Derived d;
	b1 = &d;
	b1->display();
	b1->display1();
	b1->getvalue();  */
	}
	return 0;
}