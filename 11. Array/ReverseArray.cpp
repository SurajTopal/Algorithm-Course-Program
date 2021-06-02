#include<iostream>
using namespace std;
void reverseArray(int l,int h,int a[])
{
	int temp=0;
	if(l>=h)
	   return ;

		temp=a[l];
		a[l]=a[h];
		a[h]=temp;
		reverseArray(l+1,h-1,a);
	
}
int main()
{
	int size=5;
	int a[]={1,4,5,6,4};
	int i=0;
	int h=size-1;
	printf("Print Array element : \n");
	for(;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	reverseArray(0,h,a);
	printf("\nPrint Array element : \n");
	for(;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
}
