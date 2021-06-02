#include<iostream>
using namespace std;
void duplicateElement(int a[])
{
	int i,j;
	int flag=1;
	for(i=0;i<14;i++)
	{
		flag=1;
		for(j=i+1;j<15;j++)
		{
			if(a[i]==a[j])
			  {
				  flag++;
		      }
		}
		if(flag>1)
	   {
	        i=i+flag-1;
		   	cout<<"  "<<a[i]<<" Duplicate"<<flag<<endl;
	   }
	}
}
int main()
{
	int a[]={1,1,2,2,3,4,4,4,5,7,8,9,9,9,10};
	duplicateElement(a);
	return 0;
}
