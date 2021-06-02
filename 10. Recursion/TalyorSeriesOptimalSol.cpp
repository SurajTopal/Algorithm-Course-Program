#include<iostream>
using namespace std;
double e(int x,int n)
{
	static double s=1;
	if(n==0)
	    return s;
	
	s= 1+(s*x)/n; 
	return e(x,n-1);
    
}
int main()
{
		int x, n;	
	cout<<"Enter the value of X : ";
	cin>>x;
	cout<<endl<<"Enter the value of N : ";
	cin>>n;
	
	cout<<endl<<"Result : "<<e(x,n);
}
