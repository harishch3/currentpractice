#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
		set <int, greater <int> > s1;
		s1.insert(10);
		s1.insert(20);
		s1.insert(30);
		s1.insert(40);
		s1.insert(50);
		s1.insert(60);
		
		set <int, greater <int> > :: iterator itr; 
		cout << "\nThe set s1 is : "; 
		for (itr = s1.begin(); itr != s1.end(); ++itr) 
		{ 
			cout << '\t' << *itr; 
		} 
		cout << endl; 
		
		 cout << "gquiz1.lower_bound(40) : "
         << *s1.lower_bound(40) << endl; 
  
  
		return 0;
}