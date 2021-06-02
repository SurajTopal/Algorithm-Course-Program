#include<iostream>
using namespace std;
void mergeArray(int a[],int b[])
{
	int c[10];
	int i=0,j=0,k=0;
	while(i < 6 && j < 4 )
	{
			if(a[i]<b[j])
			{
				c[k]=a[i];
				  i++;
			}
			else
			{
				c[k]=b[j];
				  j++;
			}
			k++;
	}
	for(;i<6;i++)
	{
			c[k]=a[i];
			k++;
	}
	for(;j<4;j++)
	{
			c[k]=b[j];
			k++;
	}
	
	 i=0;
     cout<<endl<<"Printing Array Value : ";
	for(;i<10;i++)
	  {
	  	cout<<" "<<c[i];
	  }	
	  
}
int main()
{
	int a[]={1,4,6,10,11,12};
	int b[]={1,2,4,60};
	mergeArray(a,b);
	return 0;
}
