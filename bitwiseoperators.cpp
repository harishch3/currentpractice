#include<iostream>

using namespace std;

int main()
{
int a = 10;
for(int l=7;l>=0;l--)
{
if(a & (1 << l))
{
cout<<"1";
}
else{
cout<<"0";
}
}
return 0;
}
