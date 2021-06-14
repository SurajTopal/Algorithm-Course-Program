#include <stdio.h>
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *front,*rear;

void enqueueFront(int no)
{
    struct Node * temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=no;
    temp->next=NULL;
    if(front==NULL)
       {
           front=rear=temp;
       }
       else
       {
           temp->next=front;
           front=temp;
       }
}

void enqueueRear(int no)
{
   struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
   temp->data=no;
   temp->next=NULL;
   if(front=NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}

int delFront()
{
    struct Node * temp;
    int val=-1;
    if(front==NULL)
      {
          cout<<"\nQueue is Emtpy.."<<endl;
      }
      else
      {
          temp=front;
          val=front->data;
          front=front->next;
          free(temp);
      }
      return val;
}

int delRear()
{
    struct Node *temp;
    int val=-1;
    if(front==NULL)
    {
        cout<<"\nQueue is Empty..\n";
    }
    else
    {
      if(front==rear)
      {
          val=front->data;
          temp=front;
          front=rear=NULL;
      }
      else
      {
          temp=front;
          while(temp->next->next!=NULL)
          {
              temp=temp->next;
          }
          val=temp->next->data;
          temp->next=NULL;
      }
    }
    return val;
}


void display()
{
    
    cout<<"\nDisplay Function....\n";
    struct Node * temp=front;
    if(temp==NULL)
    {
        cout<<"\nQueue is Empty..\n"<<endl;
    }
    else
    {
        while(temp)
        {
            cout<<" "<<temp->data;
            temp=temp->next;
        }
    }
}

int main()
{
    rear=front=NULL;
    printf("Hello World");
    enqueueFront(5);
    enqueueFront(10);
    enqueueFront(20);
    display();
    cout<<"\nDeleted Element : "<<delRear();
    cout<<"\nDeleted Element : "<<delRear();
    
    display();
    return 0;
}

