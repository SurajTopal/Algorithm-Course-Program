#include<iostream>
#include<stdlib.h>
using namespace std;
struct matrix
{
   int n;
   int *A;	
};    

void set(struct matrix *m,int i,int j,int x)
{
	if(i>=j)
	{
		m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
	}
	
}
int get(struct matrix *m,int i,int j)
{
	if(i>=j)
	   return m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j];
	   
	return 0;
}

void display(struct matrix m)
{
	int i,j;

	for(i=0;i<m.n;i++)
	{
		for(j=0;j<m.n;j++)
		{
			if(i>=j)
			{
			  cout<<" "<<m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j]<<" ";
		    }
		    else
		    {
		    	printf(" 0 ");
			}
		}
		printf("\n");
	}
}
 
int main()
{
	struct matrix m;
	int n;
	printf("Enter the dimension : ");
	cin>>m.n;
	m.A=(int *)malloc(m.n*(n+1)/2*sizeof(int));
	int i,j;
	int x;
	printf("\nEnter all Element : ");
	for(i=0;i<m.n;i++)
	{
		for(j=0;j<m.n;j++)
		{
			cin>>x;
			set(&m,i,j,x);
		}
	}
		
	display(m);	
 	
}
