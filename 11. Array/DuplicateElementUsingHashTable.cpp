#include<iostream>
using namespace std;
void duplicateElement(int a[],int size)
{
	int dup[size]={0};
    int i;
	for(i=0;i<20;i++)
	{
		    dup[a[i]]++;
	}	
	i=0;
	for(;i<size;i++)
	{
		if(dup[i]>1)
		  cout<<endl<<i<<" Duplicate : "<<dup[i];
	}
}

int main()
{
	int a[]={1,11,15,2,3,3,3,4,4,5,6,12,12,1,4,9,8,10,10,1};
    int max=0,i;
    for(i=0;i<20;i++)
    {
    	if(a[i]>max)
    	   max=i[a];   //  i[a] is same as  a[i]
	}
	duplicateElement(a,max);
	
}
