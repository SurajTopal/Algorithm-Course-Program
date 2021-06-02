#include<iostream>
using namespace std;
int main()
{
	char a[]="1234";  // '\0' is automatic add the end of the string.
	char b[10]={'1'};
	char c[]="Suraj";
	int i=-1;
	while(c[++i]!='\0')
	 cout<<" "<<c[i];
	 
	 cout<<endl<<"Name : "<<c;
	 cout<<endl<<"Length : "<<sizeof(a);
}
