#include<iostream>

using namespace std;

void function()
{
static int i=0;
cout<<++i<<endl;
}

int main()
{
for(int k=0;k<5;k++)
{
function();
}
}
