#include<iostream>

using namespace std;

int binarySearch(int *arr1,int low,int high,int key)
{
while(low<=high)
{
int mid = (low + high) / 2;
if(mid < arr1[key]) 
{
low = mid+1;
}
if(mid > arr1[key])
{
high = mid-1;
}
if(mid == arr1[key])
{
return mid;
}
}
return -1;
}

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
	cin >> arr[i];

int searchEle;
cout<<"\n Enter ele to search:";
cin>>searchEle;
int ret = binarySearch(arr,0,n-1,searchEle);
if(ret == -1)
	cout << "\n Element not found"<<endl;
else
{
	cout << "\n Element found at pos:"<<ret<<endl;
}
return 0;
}
