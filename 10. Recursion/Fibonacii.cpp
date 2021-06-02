#include<iostream>
using namespace std;
int a[10];
int fibmem(int n)
{
	if(n<=1)
	  {
	  	a[n]=n;
	  	return n;
	  }
	  else
	  {
	  	if(a[n-2]==-1)
	  	{
	  	   a[n-2]=fibmem(n-2);	
		}
		
		if(a[n-1]==-1)
		{
			a[n-1]=fibmem(n-1);
		}
		return fibmem(n-2)+fibmem(n-1);
	  }
}
int main()
{
	int n=7;
	
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=-1;
	}
	cout<<"Result : "<<fibmem(n);
}
