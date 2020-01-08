#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int a[100];
	int b[100];
	
	memset(a,0,sizeof(a));
	for(int j=0;j<100;j++)
	{
		a[j] = j;
		cout<<a[j]<<endl;
	}
	
	string inp = "I AM HAIRSH";
	stringstream s(inp);
	string test;
	while( s >> test)
	{
		reverse(test.begin(),test.end());
		cout<<test <<" ";
	}		
	cout<<endl;
	int n = sizeof(a) / sizeof(a[0]);
	cout <<"**************************	"<< n <<endl;
	memcpy(b,a,(n*sizeof(a[0]))); // For specifying the size.
	
	for(int k=0;k<100;k++)
	{
		cout<<b[k]<<endl;
	}
	
	return 0;
}