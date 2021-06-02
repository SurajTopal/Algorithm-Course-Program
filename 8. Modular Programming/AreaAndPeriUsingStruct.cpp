#include<iostream>
using namespace std;
struct Rectangle
{
	int length;
	int breadth;
};
void initialize(struct Rectangle *r, int l,int b)
{
   r->length=l;
   r->breadth=b;	
}
int area(struct Rectangle r)
{
	return r.length*r.breadth;
}

int peri(struct Rectangle r)
{
	int temp=2*(r.length+r.breadth);
	return temp;
}

int main()
{
	struct Rectangle p;
	int length=0,breadth=0;
   printf("Enter the length and breadth : ");
   cin>>length>>breadth;
   initialize(&p,length,breadth);
   int Area=area(p);
   int Peri=peri(p);
   
   cout<<"Area : "<<Area<<endl;
   cout<<"Perimeter : "<<Peri<<endl;
   
}
