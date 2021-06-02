#include<iostream>
using namespace std;

void TOH(int n,int A,int B,int C)
{
	if(n>0)
	{	
	TOH(n-1,A,C,B);
	cout<<"From "<<A<<" To "<<C<<endl;
	TOH(n-1,B,A,C);
    }
}
int main()
{
	int A=1,B=2,C=3;
	int NoOfDisk=0;
	cout<<"Enter the no of disk : ";
	cin>>NoOfDisk;
    
	cout<<endl<<"Result : "<<endl;	
	TOH(NoOfDisk,A,B,C);
}
