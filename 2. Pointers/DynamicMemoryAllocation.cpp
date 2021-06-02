#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
  int main()
  {
  	
//      How we can create the memory inside the heap in c language..	
  	int *p=(int *)malloc(5*sizeof(int));  // only p varible is inside the stack and array is inside the heap.
    	p[0]=34;
    	p[1]=45;
    	p[2]=46;
    	p[3]=89;
    	p[4]=90;	
    // Accessing array element with the help of pointer p .. 
  	for(int i=0;i<5;i++)
  	{
  	   cout<<p[i]<<endl;	
	}
    
     free(p);   // To delete dynamic memory because we don't need that memory any more...

//    How we can creat the memory inside the heap in c++ language ..
   
      int *q=new int[5];
	  q[0]=56;
	  q[1]=4;
	  q[2]=5;
	  q[3]=6;
	  q[4]=9;
	
	 cout<<"Print Array Elements  using pointer q :"<<endl; 
      	for(int i=0;i<5;i++)
  	{
  	   cout<<q[i]<<endl;	
	}
   	  	    	delete [] q;  // delete dynamic memory and we have written [] because it is an array.
  }
