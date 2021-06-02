#include<iostream>
using namespace std;

int fun(int x)
{
	if(x>0)
	   return fun(x-1)+x;
	
	return 0;   
}
int main()
{
	int n=0;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<endl<<"Sum of N Natural Number is : "<<fun(n);
}
