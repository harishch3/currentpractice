#include<iostream>

using namespace std;
int main()
{
			int source[]={1,2,3,4,5,6};
			int rotate=2;
			int tempSource[rotate];
			for(int i=0;i<rotate;i++)
			{
				tempSource[i]=source[i];
			}
			int n= sizeof(source)/sizeof(source[0]);
			int k1=rotate;
			for(int k=0;k<(n-rotate);k++)
			{
				source[k]=source[k1];
				k1++;
			}
			cout<<k1<<" "<<endl;
			k1=n-rotate;
			for(int y=0;y<rotate;y++)
			{
				source[k1] = tempSource[y];
				k1++;
			}

			for(int yy=0;yy<n;yy++)
			{
				cout<<source[yy]<<" ";
			}
			return 0;
}
