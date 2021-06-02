#include<iostream>
using namespace std;
void pairElementSumK(int a[],int sum)
{
	int i,j;
	for(i=0;i<9-1;i++)
	{
		for(j=i+1;j<9;j++)
		{
			 if(a[i]+a[j]==sum)
			  cout<<a[i]<<" + "<<a[j]<<endl;
		}
	}
}
int main()
{
   int a[]={2,5,3,6,7,9,1,4,8};
   pairElementSumK(a,10);	
}
