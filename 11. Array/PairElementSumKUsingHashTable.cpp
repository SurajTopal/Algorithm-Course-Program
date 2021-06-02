#include<iostream>
using namespace std;
void pairElementSumK(int a[],int sum,int size)
{
	int i,value;
	int ar[size]={0};
	for(i=0;i<9;i++)
	{
		ar[a[i]]++;
	}
	
	for(i=0;i<9;i++)
	{
		value=sum-a[i];
		if(ar[value]==1)
		 {
		     cout<<" "<<value<<" + "<<a[i]<<endl;
	         ar[value]=-1;
	         ar[a[i]]=-1;
	     }
	}
}
int main()
{
   int a[]={2,5,3,6,7,9,1,4,8};
   int i;
   int max=0;
   for(i=0;i<9;i++)
      {
      	if(a[i]>max)
      	   max=a[i];
	  }
   pairElementSumK(a,10,max);	
}
