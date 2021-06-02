#include<iostream>
using namespace std;
//There are two different two to return array 
// 1 way : int []
// 2 way : int * 
int* passArray(int a[])
{
	a[0]=12;
	a[1]=34;
   return a;	
}
int main()
{
	int a[]={1,2,4,5,6};
	int *p=passArray(a);
	int i;
		for(i=0;i<5;i++)
 	{
 		cout<<" "<<p[i];
	}
}
