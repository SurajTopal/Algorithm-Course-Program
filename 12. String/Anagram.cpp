#include<iostream>
using namespace std;
bool isAnagram(char x[],char y[])
{
	int i;
	int H[26]={0};
	for(i=0;i<7;i++)
	{
		H[x[i]-97]++;
	}
	
	for(i=0;i<7;i++)
	{
		H[y[i]-97]--;
	}
	
	for(i=0;i<26;i++)
	{
		if(H[i]!=0)
		   return false;
	}
	return true;
}

int main()
{
	char a[]="dicimal";
	char b[]="midical";
	bool result =isAnagram(a,b);
    cout<<"Anagram or not : "<<endl;
    cout<<a<<"  or  "<<b<<endl;
    if(result)
       cout<<"It is Anagram";
       else
       cout<<"It is not Anagram";
}
