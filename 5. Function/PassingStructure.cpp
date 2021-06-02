#include<iostream>
using namespace std;
struct book
{
	int id;
	string name;
};
// for pass by reference void passStructure(structure book &b2)
void passStructure(struct book b2)  // pass by value..
{
	cout<<"Id : "<<b2.id<<endl;
	cout<<"Name : "<<b2.name<<endl;
}
int main()
{
   struct book b1;
   b1={101,"Suraj"};
   
   passStructure(b1);	
  
}
