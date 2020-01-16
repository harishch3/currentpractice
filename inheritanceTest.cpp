#include<iostream>

class base
{
	private:
	base()
	{
		
	}
};

class dev:base
{};
int main()
{
	dev d();
	return 0;
}