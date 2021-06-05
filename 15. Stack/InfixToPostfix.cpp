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
 
  char val = '0';

  if (top == NULL)
    cout << "Stack Underflow";
  else
    {
      struct stack *temp = top;
      val = temp->data;
      top = top->next;
      free (temp);
    }
  return val;
}

int operand(char ch)
{
	if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
	        return 0;
	else
	     return 1;        
}
int precedence(char ch)
{
	if(ch=='+' || ch=='-')
	  return 1;
	if(ch=='*' || ch=='/')
	  return 2;
}


int operation(char ch)
{
	int no2=pop()-'0';
	int no1=pop()-'0';
	switch(ch)
	{
		case '+' : return no1+no2;
	    case '-' : return no1-no2;
	    case '*' : return no1*no2;
	    case '/' : return no1/no2;
	}
	return 0;
}

int main ()
{
     string s="3*5+6/2-4";
     string postfix="";
     int i=0;
     char prev;
	 int pPre,cPre;	
	 while(i<s.length())
     {
        	if(operand(s[i]))
        	    postfix=postfix+s[i++];
        	else
			{
				if(top==NULL)
				{	    
					push(s[i++]);
				}
				else
				{
					char prev=top->data;
					int pPre=precedence(prev);
					int cPre=precedence(s[i]);
					if(pPre >= cPre)
					{
						postfix=postfix+pop();
					
					}
					else
					{
						push(s[i++]);
					}
				
				}
			}    
    }
    while(top!=NULL)
    postfix=postfix+pop();
    
	cout<<"  PostFix : "<<postfix;
	 
	 i=0;
	while(i<postfix.length()) 
	{
		if(i==0)
		{
			push(postfix[i++]);
			push(postfix[i++]);
		}
		else
		{
			push(postfix[i++]);
		}
		push(operation(postfix[i++]));
	}
	 
	 cout<<" Result : "<<(int)top->data;
}

