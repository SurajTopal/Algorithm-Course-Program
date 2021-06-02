#include<stdio.h>
#include<iostream>
  using namespace std;
   struct rectangle
   {
   	int length;
   	int breadth;
   };
   
 int main()
 {
    struct rectangle r1;
	r1.breadth=45;
	r1.length=50;
	
	struct rectangle *r2;  // Now we are creating pointer structure 
	r2=&r1;               // address of r1 is stored in r2 ..
	
	 //cout<<r2.breadth; we cannot access the field of rectangle  because r2 is pointer variable.. we have to used ->
	 
	cout<<"print the value of r1 : using r2 : "<<endl;
	cout<<"Length : "<<r2->length<<endl;
	cout<<"Breadth : "<<r2->breadth<<endl;	
 }
