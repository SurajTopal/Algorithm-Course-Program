#include<iostream>
#include<stdio.h>
  using namespace std;
int main()
{
   // Reference variable is the part of the c++ not in c.
   int a=10; // data variable ...
   int &ref=a;  // ref is the reference variable and & is the Ampercent ..
   // Now a and ref is pointing to the same location ...
   
   cout<<"Print the value of a and ref...";
   cout<<"A : "<<a<<endl;
   cout<<"REF : "<<ref<<endl;
   
   cout<<"Enter the new value of ref >>> ";
   cin>>ref;
   
   cout<<"Print the value of a and ref...";
   cout<<"A : "<<a<<endl;
   cout<<"REF : "<<ref<<endl;
 
 
   cout<<"Address of a and ref are same because they are pointing to the same memory location..."<<endl;
   cout<<"A address : "<<&a<<endl;
   cout<<"ref address : "<<&ref<<endl;
}
