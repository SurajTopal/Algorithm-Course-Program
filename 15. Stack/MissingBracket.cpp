#include <stdio.h>
#include <iostream>
#include<stdlib.h>

using namespace std;
struct stack
{
  char data;
  struct stack *next;
};

 struct stack *top = NULL;

void push (char ch)
{
  struct stack *temp = new stack ();
  temp->data = ch;
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


char pop ()
{
  struct stack *temp = top;
  char val = '0';

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
     string s="((a+b))*(c/d))";
     int i=0;
	 while(i<s.length())
     {
     	cout<<"\n  "<<s[i];
     	
     	if(s[i]=='(')
     	  push(s[i]);
		else if(s[i]==')' && top!=NULL) 
		  cout<<"POP  "<<pop();
		   else if(s[i]!='(' && s[i]!=')')
		    {
		       i++;
		       continue;
		    }
		else  
		  {
		    cout<<"\nbrakets is missing ....";  
		  }
	   i++;
	 }
	 if(top!=NULL)
	 {
	     cout<<"\n Bracket is missing... ";
	 }
}

