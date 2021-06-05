#include <stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *s;
};

void push(struct stack *stk,int data)
{
    cout<<"top : "<<stk->top;
    if(stk->top == stk->size-1)
       {
           cout<<" \n Stack is full \n";
       }
       else
       {
           stk->top++;
           stk->s[stk->top]=data;
       }
}

int pop(struct stack *stk)
{
    int val=-1;
    if(stk->top==-1)
    {
        cout<<"\n Stack is Underflow \n";
        return val;
    }
    else
    {
        val=stk->s[stk->top];
        stk->s[stk->top]=0;
        stk->top--;
    } 
    return val;
}

int main()
{
    struct stack *stk=(struct stack *)malloc(sizeof(struct stack));
    stk->s=new int[5];
    stk->size=5;
    stk->top=-1;
    push(stk,10);
    push(stk,20);
    cout<<" "<<pop(stk)<<endl;
    cout<<" "<<pop(stk)<<endl;
    cout<<" "<<pop(stk)<<endl;
    
    push(stk,200);
    push(stk,100);
    push(stk,300);
    push(stk,500);
    push(stk,12);
    push(stk,15);
    cout<<"pop value : "<<pop(stk)<<endl;
    cout<<"pop value : "<<pop(stk)<<endl;
    
    cout<<"pop value : "<<pop(stk)<<endl;
    
    cout<<"pop value : "<<pop(stk)<<endl;
    
    cout<<"pop value : "<<pop(stk)<<endl;
    
    cout<<"pop value : "<<pop(stk)<<endl;
    
    return 0;
}
