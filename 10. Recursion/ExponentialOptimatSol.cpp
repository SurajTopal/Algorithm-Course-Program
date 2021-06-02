#include<iostream>
using namespace std;
int pow(int m,int n)
{
    if(n==0)
	   return 1;
	
	if(n%2==0)
	   return pow(m*m,n/2);
	else
	   return m*pow(m*m,(n-1)/2);
}

int main()
{
	int m,n;
	cout<<"Enter the value of M ";
	cin>>m;
	cout<<endl<<"Enter the value of N : ";
	cin>>n;
	
	cout<<endl<<"Result : "<<pow(m,n);
}
