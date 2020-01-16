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
	int p =100; // integer variable
	int *p1 =NULL; // null initialization to pointer p1
	cout<<p1<<endl;  // print address of pointer p1
	p1 = (int*) malloc(100*sizeof(int)); // allocating memory to pointer p1
	cout<<*p1<<endl;  // print value of p1
	*p1 = p; // assigning value to pointer using p variable
	cout<<*p1<<endl; // print value of p1 
	free(p1); // memory is cleared for p1
	*p1--; // pointer decrement
	cout<<*p1<<endl; // print value of p1 - which prints junk value
	
	int y = 125;
	const int  *p4=&y; // pointer to constant - as name suggests it is a pointer to a constant variable which cannot be modified.
	//*p4 = *p4+1;       // we tried modifying value it gave readonly error.
	cout<<*p4<<endl; // print value of p4
	
	int x = 126; 
	int* const p5 = &x; //constant pointer - as name suggest is pointer for which initialization needs to be done only once just like reference and can modify it's 	values
	//p5 = &y;
	cout<<*p5<<endl;
	
	int *a[5];
	
	int ary[] = {5, 10, 20, 40, 80};	
	int (*ptr)[5];	
	ptr = &ary;	
	*(*ptr+10) = 25;
	cout<<*(*ptr+10)<<endl;
	
	
	
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