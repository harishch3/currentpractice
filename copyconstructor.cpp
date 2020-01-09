#include<iostream>
#include<string.h>

using namespace std;

class copySample
{
private:
char *str;
public:
copySample(const char *pstr)
{
str= new char[6];
strcpy(str,pstr);
}
copySample(const copySample cs)
{
cout<<"copy constructor called"<<endl; 
str = new char[strlen(cs->str)];
strcpy(str,cs->str);
}
void getStr()
{
	cout<<"String:"<<str<<" Len:"<<strlen(str)<<" AddR:"<<(unsigned long)&str[0]<<endl;
}
void updateStr(const char *ustr)
{
strcat(str,ustr);
}
copySample& operator=(copySample &cst)
{
cout<<"assignment operator called"<<endl;
this->str = new char[strlen(cst.str)];
strcpy(this->str,cst.str);
return *this;
}
};

int main()
{
copySample c1("Harish");
c1.getStr();//1
copySample c2(c1);
c2.getStr();//2
c2.updateStr("Ch");
c2.getStr();//3
c1.getStr();//4
copySample c3("IT");// this string is gone
c3 = c1;
c3.getStr();//5
c3.updateStr(" HITS");
c3.getStr();//6
c1.getStr();//7
return 0;
}
