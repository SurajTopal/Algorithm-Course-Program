#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct matrix
{
  int n;
  int *A;	
}; 

void display(struct matrix m)
{
	int i,j;
	for(i=0;i<m.n;i++)
   	{
   		for(j=0;j<m.n;j++)
   		{
   			if(i-j==1)
	        cout<<" "<<m.A[i-1]<<" ";
    	else if(i-j==0)
	       cout<<" "<<m.A[m.n-1+i-1]<<" ";
	   else if(i-j==-1)
	       cout<<" "<<m.A[2*m.n-1+i-1]<<" ";
	    else 
		    cout<<" 0 ";   
		}
		cout<<endl;
    }
}
void setElement(struct matrix *m, int i,int j,int x)
{
	if(i-j==1)
	     m->A[i-1]=x;
	else if(i-j==0)
	     m->A[m->n-1+i-1]=x;
	else if(i-j==-1)
	     m->A[2*m->n-1+i-1]=x;     
   
}

int main()
{
    struct matrix m;
   	printf("Enter the Dimensions : ");
   	cin>>m.n;
   	int x,i,j;
   	m.A=new int[3*m.n-2];
	   printf("Enter the array elements : - ");
   	for(i=0;i<m.n;i++)
   	{
   		for(j=0;j<m.n;j++)
   		{
   			cin>>x;
   		   	setElement(&m,i,j,x);
		}
    }
   	display(m);
   	
   	return 0;
}
