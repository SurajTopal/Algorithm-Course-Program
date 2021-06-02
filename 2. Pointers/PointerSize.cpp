//size of every pointers are 8 bytes only ... 
#include<iostream>
using namespace std;
struct student
{   
    int id;
    char gender;
	string name;
};
int main()
{
	int *a;
	char *b;
	float *c;
	double *d;
	struct student *s1;
	cout<<"size of a pointer : "<<sizeof(a)<<endl; //8 bytes
	cout<<"size of b pointer : "<<sizeof(b)<<endl; //8 bytes 
	cout<<"size of c pointer : "<<sizeof(c)<<endl; //8 bytes
	cout<<"size of d pointer : "<<sizeof(d)<<endl; //8 bytes
	cout<<"size of struct student pointer : "<<sizeof(s1)<<endl; //8 bytes 
	
}
