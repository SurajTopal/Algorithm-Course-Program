#include<stdio.h>
#include<iostream>
using namespace std;
 //One way to write parameter of array : void passArray(int a[],int n)
 void passArray(int a[],int n)     // another way void passArray(int *a,int n) rest code is same..
 {
   /*  for each loop is not work here because a variable is pointer ...
   	for(int x : a )
 	cout<<" "<<x;
 	*/
 	int i;
 	for(i=0;i<n;i++)
 	{
 		cout<<" "<<a[i];
	}
 } 
 
 int main()
 {
    int a[]={1,3,5,6,20};
		passArray(a,5);
 }
