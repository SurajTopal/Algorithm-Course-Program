//6 7 8 9 11 12 15 16 17 18 19
#include<iostream>
using namespace std;
void missingElement(int a[])
{
	int i=0;
	int j;
	int d;
	int diff=a[0]-0;
   for(i=0;i<11;i++)
   {
   	    if(a[i]-i!=diff)
   	    {
   	    	d=(a[i]-i)-diff;
   	      for(j=0;j<d;j++)
			 {
			    cout<<endl<<"Missing Element : "<<diff+i+j;	
			 }
			 diff=a[i]-i;
		}	
   }
}

int main()
{
	int a[11];
	int i;
	cout<<"Enter the Array Element..."<<endl;
	for(i=0;i<11;i++)
	{
		cin>>a[i];
	}
	missingElement(a);
}
