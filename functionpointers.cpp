#include<iostream>

using namespace std;

void func()
{
cout<<"\n Function "<<endl;
}

int main()
{
void (*funcptr)();
funcptr = func;
(*funcptr)();
return 0;
}


