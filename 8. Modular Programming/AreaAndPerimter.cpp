#include<iostream>
using namespace std;
int area(int l,int b)
{
	return l*b;
}
int peri(int l,int b)
{
	int p=2*(length+breadth);
	return p;
}
int main()
{
	int length=0,breadth=0;
	printf("Enter the length and breadth : ");
	cin>>length>>breadth;
	
	int Area=area(length,breadth);
	int Perimeter=peri(length,breadth);
	cout<<"Area of Rectangle : "<<Area<<endl;
	cout<<"Perimeter of Rectangle : "<<Perimeter<<endl;
}
