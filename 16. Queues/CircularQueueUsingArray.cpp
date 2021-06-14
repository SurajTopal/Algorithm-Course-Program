#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Queue
{
  int size;
  int *a;
  int rear;
  int front;
};
struct Queue q;

void insert(int data)
{
    if((q.rear+1)%q.size==q.front)
    {
        cout<<"\nQueue Full";
    }
    else
    {
        q.rear++;
        q.a[q.rear%q.size]=data;
        cout<<"inserting.."<<endl;
    }
}



int del()
{
    int del=-1;
    if(q.rear==q.front)
    {
        cout<<"\nQueue is Empty";
    }
    else
    {
      q.front=(q.front+1)%q.size;
	  del=q.a[q.front];      
    }
    return del;
}

void display()
{
    int i=q.front+1;
    do
    {
    	cout<<" "<<q.a[i];
    	i=(i+1)%q.size;
	}while(i!=(q.rear+1)%q.size);
	cout<<"\n";
}
int main()
{
    printf("Enter the size of the Queue : - ");
    cin>>q.size;
    q.a=(int *)malloc(q.size* sizeof(int) );
    q.front=q.rear=0;
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();
    del();
    del();
    insert(70);
    insert(90);
    insert(20);
    display();
    return 0;
}
