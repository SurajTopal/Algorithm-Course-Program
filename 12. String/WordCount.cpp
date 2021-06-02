#include<iostream>
using namespace std;
int main()
{
	char sentence[]="how are you doing? Yo Yo";//	wordCount(sentence);
    	int i;
	int count=1;
	cout<<sizeof(sentence);
	for(i=0;i<sizeof(sentence);i++)
	{
		if(sentence[i]==32)
		{
			count++;
		}
	}
	cout<<"Word Count : "<<count;
}
