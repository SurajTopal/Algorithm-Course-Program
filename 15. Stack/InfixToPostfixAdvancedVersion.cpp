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

int optr(char ch)
{
	if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^' || ch=='(' || ch==')')
	        return 1;
	else
	     return 0;        
}
int inStackPre(char ch)
{
	if(ch=='+' || ch=='-')
	  return 2;
    else if(ch=='*' || ch=='/')
	  return 4;
	else if(ch=='^')
	  return 5;
	else
	  return 0;  
}

int outStackPre(char ch)
{
   	if(ch=='+' || ch=='-')
	  return 1;
    else if(ch=='*' || ch=='/')
	  return 3;
	else if(ch=='^')
	  return 6;
	else if(ch=='C')
	  return 7;
	else   
	  return 0;  
}
int main ()
{
	string s;
     cout<<"Enter the Expression : ";
     cin>>s;
     string postfix="";
     int i=0;
	 //"2-3+4-9"
	 
	 //      2-3+4-9
	 
	 //----
	 while(i<s.length())
     {
          if(top==NULL && optr(s[i]))
             {
             	push(s[i++]);
			 }
			 else
			 {
			 	if(optr(s[i]))
			 	{
			 	
				 cout<<"OutStack : Operator"<<s[i]<<" "<<outStackPre(s[i])<<"   InStack  :  OPerator "<<top->data<<" : "<<inStackPre(top->data)<<endl;	
				 
			 	    if(outStackPre(s[i])<inStackPre(top->data) && s[i]==')')
					   {
					   	
					   	  postfix=postfix+pop();
					   	  cout<<"\n SO Far : "<<postfix;
					   	  pop();
					   	  i++;
					   
					   }
					   else if(outStackPre(s[i]) <  inStackPre(top->data))	
					   {
					   	
					   	  postfix=postfix+pop();
					   	  cout<<"\n SO Far : "<<postfix;
					   	  
					   }
					   else
					   {
					    	push(s[i++]);
					   }
				}
				else
				{
				     postfix=postfix+s[i++];
				}
			 }		
     }
     cout<<" Result : "<<postfix;
    while(top!=NULL)
    {
    postfix=postfix+pop();
    }
	cout<<"  PostFix : "<<postfix;

}


