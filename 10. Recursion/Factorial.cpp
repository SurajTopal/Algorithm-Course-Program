#include<iostream>
using namespace std;
int fact(int n)
{
	if(n>=1)
	{
		return fact(n-1)*n;
	}
   return 1;	  
}
int main()
{
	int n=0;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"Factorial of Given number is : "<<fact(n);
}
