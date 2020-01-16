
// CPP program to check if a string is  
// substring of other. 
#include <bits/stdc++.h> 
using namespace std; 
  
int getLen(char *source)
{
	int len=0; 
	while ( source[len] !='\0')
		len++;
	return len;
}
// Returns true if s1 is substring of s2 
int isSubstring(char *s1, char *s2) 
{ 
	// O(m(n-m+1)).
	int M=getLen(s1); // substring
	int N=getLen(s2); // mainstring
  
    for (int i = 0; i <= N - M; i++) 
	{ 
        int j;  
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
        if (j == M) 
            return i; 
    } 
  
    return -1; 
}   
/* Driver program to test above function */
int main() 
{ 
    char s1[10]= "sample"; 
    char s2[50]= "this is a sample program for all string ops"; 
	
	// Logic for finding substring
    int res = isSubstring(s1, s2); 
    if (res == -1) 
        cout << "Not present"<<endl; 
    else
        cout << "Present at index " << res<<endl; 
	
	// Logic for string concatenation
	int k = getLen(s1);
	for(int j=0;j< getLen(s2);j++)
	{  
		s1[k++] = s2[j]; 
	}
	s1[k] = '\0';
	cout<<"concatenated string:"<<s1<<endl;

	// Logic for reversing the string
	int j2 = getLen(s1)-1;	
	for(int j1=0;j1<getLen(s1)/2;j1++)
	{
		char temp = s1[j1];
		s1[j1] = s1[j2];
		s1[j2] = temp;
		j2--;
	}
	cout<<"Reversed string:"<<s1<<endl;
    return 0; 
} 