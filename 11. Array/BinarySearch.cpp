#include<iostream>
using namespace std;
int binarySearch(int l,int h,int ar[],int key)
{
	int mid=0;
	if(l<=h)
	{
		mid=(l+h)/2;
		
		if(ar[mid]==key)
		   return mid;
		else
		{
		   if(ar[mid]<key)
		   	  return binarySearch(mid+1,h,ar,key);
		   else
		      return binarySearch(l,mid-1,ar,key);
	    }
	}
	else
	{
		return -1;
	}
}
int main()
{
	int a[]={4,8,10,15,18,21,24,27,30,33,34,37,39,41,43};
	cout<<"Result : "<<binarySearch(0,14,a,4);
}
