#include<iostream>
using namespace std;
void findingDuplicate(char ch[])
{
	int f[27]={0};
	int i=0;
	int length=0;
	for(i=0;ch[i]!='\0';i++)
	    length++;
	
	for(i=0;i<length;i++)
	{
		f[ch[i]-96]++;
	}
	
	for(i=1;i<27;i++)
	{
		if(f[i]>1)
		{
			cout<<endl<<char(i+96)<<" Duplicate :   "<<f[i];
		}
	}
	
}
int main()
{
	char ch[]="fzinzdizng";
	findingDuplicate(ch);
}
