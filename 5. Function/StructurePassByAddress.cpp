#include<iostream>
using namespace std;
struct book
{
	int id[5];
	string name;
};
void passStructure(struct book *b2)  // pass by address..
{
    b2->id[0]=100;  // here we have used -> because b2 is pointer variable..
    int i;
    cout<<"Id : ";
    for(i=0;i<5;i++)
    {
    	cout<<" "<<b2->id[i];
	}
	cout<<endl;
	cout<<"Name : "<<b2->name<<endl;
}
int main()
{
   struct book b1;
   b1={{1,2,4,5},"Suraj"};
   
   passStructure(&b1);	
  
}
