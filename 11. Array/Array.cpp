#include<iostream>
#include<stdlib.h>
using namespace std;
  struct Array
  {
  	int *A;
  	int size;
  	int length;
  };
  
void Delete(struct Array &ar,int index)
{
	int i;
	if(index>=ar.size || index<0)
	{
	   cout<<endl<<"Array Index out of bound.."<<endl;	
	}
	else
	{
	cout<<endl<<"Deleted No is : "<<ar.A[index];
	   		if(index==ar.length-1)
	   	{
	   		ar.A[index]=0;
		}
		else
		{
		  for(i=index;i<ar.length;i++)
		  {
		  	ar.A[i]=ar.A[i+1];
		  }  	
	      ar.A[ar.length-1]=0;
		}
			   		ar.length--;
    
	}
}  
void insert(struct Array &ar,int data,int index)
{
	int i;
	
	if(index>=ar.size || index<0)
	{
	   cout<<endl<<"Array Index out of bound.."<<endl;	
	}
	else
	{ 
	  if(index==ar.length)
	  {
	    ar.A[ar.length]=data;
	    ar.length++;
	  }
	  else
	  {
	  	ar.length++;
	  	for(i=ar.length;i>index;i--)
	  	{
	  	  ar.A[i]=ar.A[i-1];	
		}
	  	ar.A[index]=data;
	  }
    }
}
void Append(struct Array &ar, int data)  // we Have use reference because we need to modify the array.
{
   ar.A[ar.length]=data;
   cout<<ar.length;
   ar.length++;
   cout<<endl<<ar.length;	
}  
void Display(struct Array ar)
{
   int i;
   cout<<endl<<"Print the Element of the Array : ";
   	for(i=0;i<ar.length;i++)
   	{
   	  cout<<endl<<"  "<<ar.A[i];	
	}
}
int main()
{
	struct Array ar;
	int n,i;
	cout<<"Enter the size of an Array : ";
	ar.size=5;
	//cin>>ar.size;
	ar.A=(int *)malloc(ar.size*sizeof(int));
	ar.length=0;
	
	cout<<endl<<"Enter number of numbers : ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>ar.A[i];
		ar.length++;
	}
	
	Display(ar);
	Append(ar,10);
	cout<<"Length: "<<ar.length;
	Display(ar);
	insert(ar,100,-1);
	Display(ar);
	Delete(ar ,2);
	Display(ar);
	return 0;
}
