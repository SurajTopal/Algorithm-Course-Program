#include<bits/stdc++.h>
using namespace std;
void weight(char s[],int a[])
{
	int c[27]={0};
	int i;
      for(i=0;i<27;i++)
      {
          c[s[i]-96]++;
      }
      int j=0;
      for(i=0;i<7;i++)
      {
      	   for(j=1;j<27;j++)
      	   {
      	   	    if(a[i] == c[j])
		   }
	  }
      
      
      
       for(i=0;i<27;i++)
      {
          cout<<c[i]<<" ";
      }
}
int main()
{
   int a[]={6,1,3,12,5,9,10};
   char s[]="abccddde";	
   weight(s,a);
}
