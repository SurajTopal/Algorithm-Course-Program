#include<iostream>
using namespace std;

//Monothilic Program : when we write the whole code in the main function only 
int main()
{
	int length=0,breadth=0;
	printf("Enter the length and breadth : ");
	cin>>length>>breadth;
	
	int area=length*breadth;
	int perimeter=2*(length+breadth);
	
	cout<<"Area of Rectangle : "<<area<<endl;
	cout<<"Perimeter of Rectangle : "<<perimeter<<endl;
}
