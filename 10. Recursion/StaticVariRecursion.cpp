#include<iostream>
using namespace std;
int fun(int n)
{
	static int x;
	if(n>0)
	{
		x++;
	    return fun(n-1)+x;	
	}
}
int main()
{
	int n=5;
	cout<<" Result : "<<fun(n);
}
