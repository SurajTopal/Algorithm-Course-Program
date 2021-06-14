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
    if(q.rear==q.size)
    {
        cout<<"\nQueue Full";
    }
    else
    {
        q.rear++;
        q.a[q.rear]=data;
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
       del=q.a[++q.front];
	   q.a[q.front]=0;        
    }
    return del;
}

void display()
{
    cout<<"\nDisplay Method : \n";
      if(q.rear==q.front)
      {
      	cout<<"\nQueue is Empty \n";
      	return;
	  }
     for(int i=q.front+1;i<=q.rear;i++)
    {
        cout<<" "<<q.a[i];
    }
}
int main()
{
    printf("Enter the size of the Queue : - ");
    cin>>q.size;
    q.size-=1;
    q.a=(int *)malloc(q.size*sizeof(int));
	q.rear= -1;
    q.front= -1; 
    insert(23);
    insert(45);
    display();
	insert(10);
    insert(20);
    display();
    del();
    del();
    insert(122);
    insert(124);
    display();
    return 0;
}
