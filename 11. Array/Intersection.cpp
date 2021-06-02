#include<iostream>
using namespace std;
void intersection(int a[],int b[])
{
	int c[5];
	int i;
	int k=0;
	int j=0;
//   we take length which is maximum length of the given array ...
    for(i=0;i<5;i++)
    {
	   	for(k=0;k<4;k++)
	   	{
	       if(a[i]==b[k])
		    {
			  c[j]=b[k];		
	          j++;
			}
		}
	}
	i=0;
	cout<<endl<<"Printing Array Value : ";
	for(;i<j;i++)
	  {
	  	cout<<" "<<c[i];
	  }	

	
}
int main()
{
  	int a[]={0,2,3,6};
  	int b[]={1,2,3,4,5};
  	
  	intersection(a,b);
}
