#include <bits/stdc++.h>
using namespace std;
int main()
{int i,len,b=0;  string s1;
cout<<"Enter The Production:"<<endl;
getline(cin,s1);
len= s1.length();
if(s1[1]=='-' && s1[2]=='>' && (s1[0]>='A' && s1[0]<='Z'))
{  if((s1[3]>='a' && s1[3]<='b') || s1[3]=='+' || s1[3]=='-' || s1[3]=='*' || s1[3]=='/')
cout<<"First={"<<s1[3]<<" ";
for(i=4;i<len;i++)
{
if(s1[i]=='|')
{ if((s1[i+1]>='a' && s1[i+1]<='b') || s1[i+1]=='+' ||
s1[i+1]=='-' ||
s1[i+1]=='*' || s1[i+1]=='/')
{
i++; cout<<s1[i];
}
}
}
cout<<"}"<<endl;
}
 else
 cout<<"Not Production"<<endl;
 }
