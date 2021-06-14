#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Queue
{
  int size;
  int *a;
  int rear;
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
    if(q.rear==- 1)
    {
        cout<<"\nQueue is Empty";
    }
    else
    {
        for(int i=0;i<q.rear;i++)
        {
            q.a[i]=q.a[i+ 1];
        }
        del=q.a[q.rear];
        q.a[q.rear]=0;
        q.rear--;
    }
    return del;
}

void display()
{
    cout<<"\nDisplay Method : \n";
      if(q.rear==-1)
      {
      	cout<<"\nQueue is Empty \n";
      	return;
	  }
     for(int i=0;i<=q.rear;i++)
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
  
    insert(23);
    insert(45);
    insert(10);
    insert(20);
    display();
    del();
    del();

    display();
    return 0;
}
