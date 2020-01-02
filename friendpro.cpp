#include<iostream>

using namespace std;

class X
{
private:
int x;
public:
X()
{
x = 20;
}
int getX()
{
return x;
}
friend void callX(X &x1);
};

void callX(X &x1)
{
x1.x = 10;
}

int main()
{
X xobj;
cout<<xobj.getX()<<endl;
callX(xobj);
cout<<xobj.getX()<<endl;
}
