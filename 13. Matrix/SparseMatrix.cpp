//Program is not working....
//sparse Matrix is that type of matrix where there are many zero value than non-zero value.
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Element
{
	int i;
	int j;
	int x;
};
struct sparse
{
	int m;
	int n;
	int num;
	struct Element *e;
};
struct sparse * add(struct sparse *s1,struct sparse *s2)
{
	int i=0,j=0,k=0;
	struct sparse *sum;
	sum=(struct sparse *)malloc(sizeof(struct sparse));
	sum->e=(struct Element *)malloc((s1->num+s2->num)*sizeof(struct Element));
	while(i<s1->num && j< s2->num)
	{
		if(s1->e[i].i<s2->e[j].i)
		    sum->e[k++]=s1->e[i++];
		else if(s1->e[i].i>s2->e[j].i)
		    sum->e[k++]=s1->e[j++];
		else
		  {
		    if(s1->e[i].j < s2->e[j].j)
			    sum->e[k++]=s1->e[i++];
			else if(s1->e[i].j > s2->e[j].j) 
			  	sum->e[k++]=s2->e[j++];
			else
			    sum->e[k++].x = s1->e[i++].x + s2->e[j++].x;  	
		  }	    
	}
	
	for(;s1->num;i++)
	   sum->e[k++]=s1->e[i];
	   
	for(;s2->num;j++)
	  sum->e[k++]=s2->e[j];
	  
	  
	sum->m=s1->m;
	sum->n=s1->n;
	sum->num=k;
	
	return sum;     
}
void create(struct sparse *s)
{
	int i;
	printf("Enter the Dimensions : -");
	cin>>s->m;
	cin>>s->n;
	printf("Number of non-zero : ");
	cin>>s->num;
	s->e=(struct Element *)malloc(s->num*sizeof(struct Element));
	printf("Enter no. of non-zero element : -");
	for( i=0;i<s->num;i++)
	{
		cin>>s->e[i].i;
		cin>>s->e[i].j;
		cin>>s->e[i].x;
	}
}
/*
void display(struct sparse s)
{
	int i,j,k=0;
	
	for(i=0;i<s.m;i++)
	{
		for(j=0;j<s.n;j++)
		{
			if(s.e[k].i==i && s.e[k].j==j)
			{
				cout<<" "<<s.e[k++].x<<" ";
			}
			else
			{
				cout<<" 0 ";
			}
		}
		cout<<endl;
	}
}
*/
void display(struct sparse s)
{
	int i,j,k=0;
	for(i=0;i<s.m;i++) 
	{
	  for(j=0;j<s.n;j++) 
	 {
	  if(i==s.e[k].i && j==s.e[k].j)
	   printf("%d ",s.e[k++].x);
	 else
	   printf("0 ");
	 }
	  printf("\n");
   }
}


int main()
{
	struct sparse s1;
	struct sparse s2;
	struct sparse *s;
	create(&s1);
	display(s1);
	cout<<endl;
	create(&s2);
	display(s2);
	s=add(&s1,&s2);
	cout<<endl<<"Addition : "<<endl;
	display(*s);
}
