#include <stdio.h>
#include <iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
struct stack1
{
  int data;
  struct stack1 *next;
};

 struct stack1 *top1 = NULL;

void push (int no)
{
  struct stack1 *temp = new stack1 ();
  temp->data = no;
  temp->next = NULL;

  if (top1 == NULL)
    {
      top1 = temp;
    }
  else
    {
      temp->next = top1;
      top1 = temp;
    }
}


int pop1 ()
{
 
  int val = '0';

  if (top1 == NULL)
    cout << "stack1 Underflow";
  else
    {
      struct stack1 *temp = top1;
      val = temp->data;
      top1 = top1->next;
      free (temp);
    }
  return val;
}

int operand(char ch)
{
	if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^')
	        return 1;
	else
	     return 0;        
}

int operation(char ch)
{
	int no2=pop1();
	int no1=pop1();
	cout<<"no1 : "<<no1<<endl;
	cout<<"no2 : "<<no2<<endl;
	switch(ch)
	{
		case '+' : return no1+no2;
	    case '-' : return no1-no2;
	    case '*' : return no1*no2;
	    case '/' : return no1/no2;
	    case '^' : return pow(no1,no2); 
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
	
	 cout<<" Result : "<<top1->data;
}

