#include<iostream>
#include<stdlib.h>
using namespace std;
int * passArray(int size)
{
	//For creating dynamic memory allocation use malloc in c and in C++ we use new keyword.
    int *array=(int *)malloc(sizeof(size));  // or 	int *array=new int[size];
	int i;
	for(i=0;i<size;i++)
	{
		cin>>array[i];
	}
	return array;
}
int main()
{
	int *p,size=5;
	p=passArray(size);
    int i;
		for(i=0;i<5;i++)
 	{
 		cout<<" "<<p[i];
	}
}
