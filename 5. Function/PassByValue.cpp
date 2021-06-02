#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int x,int y)  // formal parameter is a,b ..
{
  int temp;
  temp=x;
  x=y;
  y=temp;
  
  cout<<"print the value of x and y in the swap function .."<<endl;
  cout<<"X : "<<x<<endl;
  cout<<"Y : "<<y<<endl;
  
}

int main()
{
	int a,b;
	a=10;
	b=40;
	swap(a,b);  // actual paramter is a,b
	
	
  // value in the main function is still not swap....	
   cout<<"print the value of a and b after swap function called..."<<endl;
   cout<<"a : "<<a<<endl;
   cout<<"b : "<<b<<endl;
}
