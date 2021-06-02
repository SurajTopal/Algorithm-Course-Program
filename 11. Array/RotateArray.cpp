#include<iostream>
using namespace std;
void rotateArray(int a[])
{
	int temp=0;
	int i;
	temp=a[4];
	for( i=4;i>=0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=temp;
}
int main()
{
	int size=5,i;
	int a[]={1,4,5,6,4};
    rotateArray(a);
	printf("\nPrint Array element : \n");
    for(i=0;i<5;i++)
       cout<<" "<<a[i];
}
