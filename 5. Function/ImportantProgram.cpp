#include<iostream>
using namespace std;
struct rectangle
{
	int length;
	int breadth;
};
void initialize(struct rectangle *r,int l , int b )
{
	r->length=l;
	r->breadth=b;
}

int area(struct rectangle r)
{
	return r.length*r.breadth;
}

void changeLength(struct rectangle &r, int l)
{
	r.length=l;
}
int main()
{
  struct rectangle r1;
  initialize(&r1,10,20);  
  changeLength(r1,30);
  cout<<"Area of Rectangle : "<<area(r1);
}
