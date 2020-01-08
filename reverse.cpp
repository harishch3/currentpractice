#include<iostream>
#include<string.h>
int main()
{
char str[]="HARISH CHIKKARAJU";
std::cout<<str<<std::endl;
int n = strlen(str);
std::cout<<n<<std::endl;
int j=n-1;
char temp;
for(int i=0;i<n/2;i++)
{
temp = str[i];
str[i]=str[j];
str[j]=temp;
j--;
}
std::cout<<str<<std::endl;
return 0;
}
