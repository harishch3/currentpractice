#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
string s = "HARISH";
string sout;
cout<<s<<endl;
cout<<s.append(" CHIKKARAJU")<<endl;
cout<<s.size()<<endl;
for(int i=0;i<s.size();i++)
{
cout<<s.at(i);
}
cout<<"\nBefore reverse printing"<<endl;
for(int i = s.size();i>=0;i--)
{
cout<<s[i];
sout+=s[i];
}
cout<<"\nAfter reversing the string"<<endl;
for(int i=0;i<sout.size();i++)
{
cout<<sout[i];
}
cout<<"\n Pos of CH:"<<s.substr(s.find("HAR"),s.size())<<endl;
cout<<oct<<15<<endl;

ofstream in("test.dat");
in << "I have used wrong object name";
in <<"";
return 0;
}


