#include<bits/stdc++.h>
using namespace std;
string pangrams(string s) {
   int a[26]={0};
   int i;
   for(i=0;s[i]!='\0';i++)
   {
       if( 97 <= s[i]  &&  s[i]<=122)
          a[s[i]-97]++;
       else
          a[s[i]-65]++;
   }
   
   for(i=0;i<26;i++)
   {
   	 cout<<" "<<a[i];
   }
   
   
   
   for(i=0;i<26;i++)
   {
       if(a[i]<1)
         return "not pangram";
   }
  return "pangram";
}
int main()
{
   string s="We promptly judged antique ivory buckles for the next prize";
   cout<<pangrams(s);
   return 0;	
}
