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
cout<<"PUsh ----------------------"<<temp->data<<endl;
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
 
  int val = '0';

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
	        return 1;
	else
	     return 0;        
}

int operation(char ch)
{
	int no2=pop();
	int no1=pop();
	cout<<"no1 : "<<no1<<endl;
	cout<<"no2 : "<<no2<<endl;
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
	 
	 int i=0;
    string postfix="234*+82/-";
	cout<<"  PostFix : "<<postfix;
	
	for(int i=0;i<postfix.length();i++)
	{
	    if(operand(postfix[i]))
		{
		    push(operation(postfix[i]));	
		}	
		else
		{
			push(postfix[i]-'0');
		}
	}
	
	 cout<<" Result : "<<top->data;
}

