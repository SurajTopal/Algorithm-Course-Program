#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
};
struct Node *front=NULL;
struct Node *rear=NULL;

void enqueue(int no)
{
   struct Node * temp=(struct Node *)malloc(sizeof(struct Node));
   temp->next=NULL;
   temp->data=no;
   if(front==NULL)
      { front=temp;
        rear=front;
      }
      else
      {
           rear->next=temp;
           rear=temp;
      }
}

int dequeue()
{
	struct Node * temp;
    if(front==NULL)
    {
        cout<<"Queue is Empty..";
        return -1;
    }
    temp=front;
    int no=front->data;
    front=front->next;
    free(temp);
    return no;
}

void display()
{
    cout<<"\nDisplay Queue Element ...\n";
   struct Node *temp=front;
   while(temp!=NULL)
   {
       cout<<" "<<temp->data;
       temp=temp-> next;
   }
}

int main()
{
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    dequeue();
    display();
    
    return 0;
}

