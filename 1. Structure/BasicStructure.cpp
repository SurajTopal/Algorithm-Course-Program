#include<iostream>
#include<stdio.h>
using namespace std;
 struct book
 {
 	int id;
 	float price;
	string name;
 }b1;   // we can create the book variable here  b1. 
 
  int main()
  {
      struct book b2;   // we can also create the book variable in the main method ..
      b1={101,350.5f,"HateLove"};
      
      cout<<"Print the details of b1 : "<<endl;
      cout<<"Id : "<<b1.id<<endl;
      cout<<"price : "<<b1.price<<endl;
      cout<<"Name : "<<b1.name<<endl;      
      
      
      //Assigning value of b2 ..
      b2.id=102;
      b2.price=350.67;
      b2.name="Omm";
      
      cout<<"Print the details of b2 : "<<endl;
      cout<<"Id : "<<b2.id<<endl;
      cout<<"price : "<<b2.price<<endl;
      cout<<"Name : "<<b2.name<<endl;
      
  }
