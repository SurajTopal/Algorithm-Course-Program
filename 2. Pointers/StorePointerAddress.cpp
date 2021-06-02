#include<iostream>
using namespace std;
  int main()
{
	
   //Below Array variable is store in the stack not in the heap ... 
   //To store the varible in the heap we need do dynamic memory allocation...
   int a[5]={16,5,3,5,8};
   int *x=a;   // storing the address of array first index and we are not writing & before a because a is array 
               // varible we don't need to give & symbol.     
   int i;
   for(i=0;i<5;i++)
   {
   	 cout<<a[i]<<endl;
   }
   
   cout<<" Accessing array element using x pointer ..."<<endl; 
      for(i=0;i<5;i++)
   {
   	 cout<<x[i]<<endl;
   }
	
}
