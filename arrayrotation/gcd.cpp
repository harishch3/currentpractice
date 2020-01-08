#include<iostream>

using namespace std;

int i;
int  gcd(int a,int b)
{
		i++;
		if( a == 0 )
			return b;
		cout << "i:"<<i<<" :"<<b%a << " " <<endl;		
		return gcd( b%a, a);
}

int main()
{
	int a = 9,b=2;	
	i=0;
	cout<<gcd(a,b)<<endl;
	return 0;
}