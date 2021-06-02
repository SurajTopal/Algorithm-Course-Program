#include<iostream>
using namespace std;
void stringPermutation(char s[],int l,int h)
{
	int i;
	if(l==h)
	  printf("%s  ",s);
	else
	 {
	    for(i=l;i<=h;i++)
		{
		    swap(s[l],s[i]);
			stringPermutation(s,l+1,h);
			swap(s[l],s[i]);	
		}	
	 }  
}
int main()
{
	char ch[]="ABCD";
	int l=0;
	int h=3;
	stringPermutation(ch,l,h);
	return 0;
}
