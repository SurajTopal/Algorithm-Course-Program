#include<iostream>
using namespace std;
int sum(int ar[],int n)
{
	if(n<0)
	   return 0;
	else
	   return sum(ar,n-1)+ar[n];   
	}

int main()
{
	int a[]={1,3,3,2,3,5,7,10,1,10};
	int size=10;
	cout<<"Sum of array element : "<<sum(a,size-1);
	return 0;
}
