#include<iostream>
#include<cstdlib>
using namespace std;

void test(int &t)
{
cout<<"\n"<<t<<endl;	
}

int main()
{
  	//pointer
	int p =100;
	int *p1 =NULL;
	cout<<p1<<endl;
	p1 = (int*) malloc(100*sizeof(int));
	cout<<*p1<<endl; 
	*p1 = *p1+69888;
	cout<<*p1<<endl;
	free(p1);
	*p1--;
	cout<<*p1<<endl;
	
	
/* 	// reference
	int p2  = 200;
	int &p3 = p2 ;	
	cout<<p3++<<endl;
	cout<<p3<<endl;
	
	test(p2);  */
	
	/* 	int *ptr;
	ptr = (int*) malloc(1*sizeof(int));
	cout << "Enter 5 integers" << endl;
	for (int i=0; i<1; i++)
	{
	// *(ptr+i) can be replaced by ptr[i]
		cin >> *(ptr+i);
	}
	cout << endl << "User entered value"<< endl;
	for (int i=0; i<1; i++)
	{
		cout << *(ptr+i) << " ";
	}
	free(ptr);
	/* prints a garbage value after ptr is free */
	/*cout << "Garbage Value" << endl;
	for (int i=0; i<1; i++)
	{
		cout << *(ptr+i) << " ";
	}*/
	return 0; 
}