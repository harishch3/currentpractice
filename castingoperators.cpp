#include<iostream>

using namespace std;

int main()
{
int i=12;
long l,l1;
l = i;
cout<<"longval:"<<l<<endl;
l1 = static_cast<int>(i);
cout<<"longval:"<<l1<<endl;
float f1 = 236.2236;
i = static_cast<float>(f1);
cout<<"floatV:"<<i<<endl;

void *vp;
vp = &i;
int *i1 = static_cast<int*>(vp);
cout<<*i1;
void *vp1;
void	 *i2 = static_cast<void*>(vp1);
return 0;
}
