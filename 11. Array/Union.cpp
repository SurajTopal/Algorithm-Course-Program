#include<iostream>
using namespace std;
void Union (int a[],int b[])
{
	int c[9];
	int i;
	int k=0;
	for(i=0;i<4;i++)
	{
		c[i]=a[k];
		k++;
	}
	int j,flag;
	for(i=0;i<5;i++)
	{
		flag=0;
		for(j=0;j<k;j++)
		{
			if(b[i]==c[j])
			   flag=1;   
		}
		if(flag==0)
		{
			c[k]=b[i];
			k++;
		}
	}
   	 i=0;
     cout<<endl<<"Printing Array Value : ";
	for(;i<k;i++)
	  {
	  	cout<<" "<<c[i];
	  }	

	
}
int main()
{
  	int a[]={0,2,3,6};
  	int b[]={1,2,3,4,5};
  	
  	Union(a,b);
}
