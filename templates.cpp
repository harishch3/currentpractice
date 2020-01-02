#include<iostream>

using namespace std;

template<typename t>
t max1(t a,t b)
{
if(a > b)
	return a;
else
	return b;
}

int main()
{
int a=12,b=16;
cout<<max1(a,b)<<endl;
cout<<max1(2321.324,676.7)<<endl;
cout<<max1('x','C')<<endl;
}
