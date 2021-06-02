
// Note : - Call by reference is only support in c++;
#include<stdio.h>
#include<iostream>
using namespace std;
  void swap(int &a,int &b)
  {
     int temp;
	 temp=a;
	 a=b;
	 b=temp;	
   cout<<"print the value of a and b in the swap function.."<<endl;
   cout<<"a : "<<a<<endl;
   cout<<"b : "<<b<<endl;
  }


 int main()
 {
 	int a,b;
 	a=40;
 	b=10;
 	
 	swap(a,b);
   cout<<"print the value of a and b after swap function called..."<<endl;
   cout<<"a : "<<a<<endl;
   cout<<"b : "<<b<<endl; 
 }
