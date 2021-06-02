#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

  struct book
  {
  	int id;
  	float price;
  };
  
  
 int main()
 {
     //Memory inside the heap..in c language...
	 struct book *p=(struct book*)malloc(sizeof(struct book));
	 p->id=101;
	 p->price=105.5;
	 
	 cout<<"Print the value of P : "<<endl;
	 cout<<"id : "<<p->id<<endl;
	 cout<<"price : "<<p->price<<endl;	
	 
	 //Memory inside the heap..in c++ language ..
	 struct book *q=new book;
	 q->id=101;
	 q->price=405;

     cout<<"Print the value of Q : "<<endl;
	 cout<<"id : "<<q->id<<endl;
	 cout<<"price : "<<q->price<<endl;	
  	 
 }
