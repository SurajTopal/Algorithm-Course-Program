#include<iostream>
using namespace std;
int partition(int A[],int lb,int ub)
{
  	int pivot=A[lb];
  	int start=lb;
  	int end=ub;
  	int temp;
  	while(start<end)
  	{
  	   while(A[start] <= pivot)
		 start++;
		 
	   while(A[end] > pivot)
	      end--;
		  
		  if(start<end)
		  {
		  	temp=A[start];
		  	A[start]=A[end];
		  	A[end]=temp;
		  }	 	
	}
  	   temp=A[lb];
  	   A[lb]=A[end];
  	   A[end]=temp;
  	return end;
}

int ksmallest(int A[],int l,int h,int k)
{
	int loc;
	if(l<=h)
	{
		loc=partition(A,l,h);
		if(loc+1==k)
		   return A[loc];
		else
		{
		   if(loc+1>k)
		      ksmallest(A,l,loc-1,k);
			else
			  ksmallest(A,loc+1,h,k);  	
		}   
	}
}
int main()
{
	int size,k;
	cout<<"\nEnter the size of array : -\n";
	cin>>size;
	int a[size];
	cout<<"\nEnter the element of array : - \n";
	int i;
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter k smallest element : \n";
	cin>>k;
     int result= ksmallest(a,0,size-1,k);
     cout<<"\nPrint  Array Element  K : "<<k<<"  "<<result;
      
}
