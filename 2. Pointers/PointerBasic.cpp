#include<stdio.h>
#include<iostream>
using namespace std;
  int main()
  {
  	int a=10;      // Data Variable .. 
	int *p;       // Pointer Variable ..
  	p=&a;        // Assign address of a to p pointer variable.. 
  	cout<<*p<<endl;   // Accessing value of a using deferencing operator.
  	
  	
  	// Both the varible gives same address...
  	cout<<"Address of a using p : "<<p<<endl;   
  	cout<<"Address of a using & of operator : "<<&a<<endl;
  	
  	
  	// Now store one pointer address to another pointer..
  	
  	int x=45;
  	int *y;
  	int **z;
  	y=&x;     // store address of x in y
  	z=&y;     // store address of y in z 
  	
  	cout<<"value of x using x : "<<x<<endl;     //45
  	cout<<"value of x using y : "<<*y<<endl;   //45
  	cout<<"value of x using z : "<<**z<<endl; //45
	  
	
  	
  }
