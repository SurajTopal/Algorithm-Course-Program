#include <stdio.h>
#include <iostream>
#include<stdlib.h>
using namespace std;
struct stack
{
  int data;
  struct stack *next;
};

 struct stack *top = NULL;

void push (int no)
{
  struct stack *temp = new stack ();
  temp->data = no;
  temp->next = NULL;

  if (top == NULL)
    {
      top = temp;
    }
  else
    {
      temp->next = top;
      top = temp;
    }
}


int pop ()
{
  struct stack *temp = top;
  int val = -1;

  if (top == NULL)
    cout << "Stack Underflow";
  else
    {
      val = temp->data;
      top = top->next;
      free (temp);
    }
  return val;
}

int main ()
{
 
  push(10);
  push(13);
  cout << pop ();
  cout << pop ();
  return 0;
}

