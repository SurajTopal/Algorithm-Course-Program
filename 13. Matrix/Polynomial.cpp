#include<iostream>
#include<stdlib.h>
using namespace std;
int count=1;
struct Term
{
	int coef;
	int exp;
};
struct poly
{
	int n;
	struct Term *t;
};
void createPolynomial(struct poly *p)
{
	int i;
	printf("\nEnter Poly  : %d details ",count);
	//p=(struct poly *)malloc(sizeof(struct poly));
	printf("\nNo. of terms : -  \n");
	cin>>p->n;
	p->t=(struct Term*)malloc(p->n*sizeof(struct Term));
	printf("\nEnter the terms : - \n");
	for(i=0;i<p->n;i++)
	{
		printf("Term no. %d ",i+1);
		printf("\nEnter Coefficient and Exp : \n ");
		cin>>p->t[i].coef;
		cin>>p->t[i].exp;
	}
		count++;
}

struct poly * addPolynomial(struct poly *p1,struct poly *p2)
{
	struct poly *sum;
	sum=(struct poly *)malloc(sizeof(struct poly));
	sum->t=(struct Term *)malloc((p1->n + p2->n)*sizeof(struct Term));
	int i,j,k;
	i=j=k=0;
	
	while(i < p1->n && j < p2->n)
	{
		
		
		   	   if( p1->t[i].exp < p2->t[j].exp )
					   sum->t[k++] = p1->t[i++];
			   else if((p1->t[i].exp > p2->t[j].exp))
				       sum->t[k++] = p2->t[j++];
		        else
		             {
		              	    sum->t[k].exp =  p1->t[i].exp;
		            	    sum->t[k].coef  =  p1->t[i++].coef ;
				            sum->t[k++].coef += p2->t[j++].coef;
					 }
	}
	    for(;i<p1->n;i++)
	        sum->t[k++] = p1->t[i];
	        
	    for(;j<p2->n;j++)
	        sum->t[k++] = p2->t[j];
	
	sum->n=k;
	
	return sum;
}


void display(struct poly p)
{
	int i;
	cout<<"\n\nPrint Terms : \n";
	for(i=0;i<p.n;i++)
	{
		cout<<"Coeff : "<<p.t[i].coef<<"Exp :  "<<p.t[i].exp<<endl;
	}
}
void displaySum(struct poly *p)
{
    	int i;
	cout<<"\n\nSum Polynomial  : \n";
	for(i=0;i<p->n;i++)
	{
		cout<<"Coeff : "<<p->t[i].coef<<"Exp :  "<<p->t[i].exp<<endl;
	}	
}
int main()
{
	struct poly p1;
	struct poly p2;
	struct poly *sum;
	createPolynomial(&p1);
    createPolynomial(&p2);
    display(p1);
	display(p2);
	sum=addPolynomial(&p1,&p2);
	cout<<"\nResult of Addition : -\n";
	display(*sum);
}
