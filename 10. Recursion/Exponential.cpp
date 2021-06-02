#include<iostream>
using namespace std;
  int pow(int n,int power)
  {
  	if(n==0)
  	  return 1;
 
	  return pow(n,power-1)*n;  

  }
int main()
{
	int n,power;
	cout<<"Enter the value of N : ";
	cin>>n;
	cout<<endl<<"Enter the Power of N : ";
	cin>>power;
	
	cout<<"Result : "<<pow(n,power)<<endl;
}

