#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,len,k,n;
cout<<"String Number?"<<endl;
cin>>n;
string s1;
cin.ignore(1,'\n');
for(k=0;k<n;k++)
 { cout<<"Enter The String:"<<endl;
 getline(cin,s1);  len= s1.length();
 int b=0;
 for(i=0;i<len;i++)
 {
     if(s1[i]==' ')  {b=1;  break;} }
     if(b==0)
 {
     if((s1[0]>='A' && s1[0]<='Z') || (s1[0]>='a' && s1[0]<='z') || s1[0]=='_')
 {
     cout<<"Valid"<<endl;
     }
     else
        cout<<"Invalid"<<endl;
     }
     else
 cout<<"Invalid"<<endl;
 }
 }

