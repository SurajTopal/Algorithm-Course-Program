#include<iostream>
using namespace std;
  char* changingCase(char c[])
 {
          int i=0;
	for(i=0;i<sizeof(c);i++)
	   	c[i]=(int)c[i]+32;
	
	return c;	 		 	
 }
int main()
{
	char c[]="WELCOME";
	int i=0;
    char *p=changingCase(c);
    for(i=0;i<sizeof(c);i++)
	{
	   cout<<" "<<p[i];
	}
} 
