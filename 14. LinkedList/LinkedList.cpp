#include <stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node 
{
    int data;
    struct node *next;
};

struct node *start=NULL;
int length=0;
void insert(int value)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;
    
    if(start==NULL)
    {
        start=p;
    }
    else
    {
      struct node *temp=start;
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=p;
    }
}

void display()
{
    struct node *temp=start;
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        temp=temp->next;
    }
    cout<<endl;
}

void recursiveDisplay(struct node *temp)
{
    if(temp==NULL)
      return ;
      else
      {
          recursiveDisplay(temp->next);
          printf(" %d",temp->data);
	  }
}
int deleteNode(int no)
{
    struct node * t=start;
    int x;
    if(t->data==no)
      {
          x=t->data;
          start=start->next;
          free(t);
          return x;
      }
      else
      {
          struct node *q=NULL;
          while(t->data!=no && t!=NULL)
          {
              q=t;
              t=t->next;
          }
          q->next=t->next;
           x=t->data;
           free(t);
      }
      return x;
}

void count()
{
	int nodecount=0;
	struct node * temp=start;
	if(temp==NULL)
	        cout<<"\n Total NodeCount : 0 ";   
	else
	{
	   	while(temp!=NULL)
	   	{
	   	    nodecount++;
	   		temp=temp->next;
		}
		 cout<<"\n Total NodeCount : "<<nodecount;
	}    
   
}

bool searchElement(int no)
{
	struct node *temp=start;
	if(temp==NULL)
	{
		cout<<"\nThere is no element in the linked list..\n";
	}
	else
	{
		while(temp!=NULL)
		{
		    if(temp->data==no)
		    {
			   return true;
			}
			temp=temp->next;
		}
	}
	return false;
}

int sum(struct node *temp)
{
	if(temp==NULL)
	  return 0;
	return sum(temp->next)+temp->data;   
}

int maxNumber(struct node * temp)
{
	static int max=-3245;// Assuming it is min value of int....
	if(temp==NULL)
	    return max;
	else
	{
		if(max< temp->data)
		{
			max=temp->data;
		}
	}
	return maxNumber(temp->next);
}


void insertNode(int no, int position)
{
   struct node * t=(struct node *)malloc(sizeof(struct node));
   t->data=no;    
   if(position == 0 )
   {
       t->next=start;
       start=t;
   }
   else if(position > 0)
   {
       struct node *p;
       p=start;
       for(int i=1;i<position;i++)
       {
           p=p->next;
       }
       
       t->next=p->next;
       p->next=t;
   }
}

void reverseLink()
{
    struct node * p=start,*q,*r;
    q=NULL;
    r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    start=q;
}

int len()
{
    struct node * temp=start;
    while(temp!=NULL)
    {
        length++;
        temp=temp->next;
    }
    return length;
}

void insertNodeSortedWay(int no)
{
    struct node *t,* p,*q=NULL;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=no;
    t->next=NULL;
    if(start==NULL)
        start=t;
    else
    {
        p=start;
        while(p && p->data < no)
        {
            q=p;
            p=p->next;
        }
        if(p==start)
        {
            t->next=start;
            start=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
    }
}

bool improveSearch(int search)
{
   struct node *pre,*cur;
   cur=start;   
   if(cur==NULL)
       return false;
	else
	{
		while(cur!=NULL)
		{
           
		   if(cur->data==search)
		   {
		   	  pre->next=cur->next;
		   	  cur->next=start;
		   	  start=cur;
		   	  return true;
		   }
		   pre=cur;
		   cur=cur->next;
		}
	}     
   return false;
}

void reverseRecursion(struct node *q, struct node *p)
{
    if(p!=NULL)
      {
          reverseRecursion(p,p->next);
          p->next=q;
      }
      else
        start=q;
}

int main()
{
    insert(23);
    insert(30);
    insert(34);
    display();
    recursiveDisplay(start);
    count();
    
    int search=40;
    cout<<endl<<search<<" Search is found  : "<<searchElement(search);
    cout<<endl<<"Sum of All the Element : "<<sum(start);    
    cout<<endl<<"Max NO. is : "<<maxNumber(start);
    
    cout<<endl<<"Improve search version : "<<improveSearch(search)<<endl;
    
    display();
    cout<<" Length : "<<len()<<endl;
   
    display();
    insertNode(100,0);
    insertNode(50,3);
    
    insertNodeSortedWay(4);
    insertNodeSortedWay(30);
    insertNodeSortedWay(1);
    insertNodeSortedWay(10);
    
    display();
    deleteNode(100);
    deleteNode(1);
    deleteNode(34);
    display();
    reverseLink();
    display();
    cout<<"\nPrint Reverse no...\n";
    reverseRecursion(NULL,start);
    display();
    return 0;
	
}



