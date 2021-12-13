
#include <bits/stdc++.h>
using namespace std;
int main()
{ int i,len,b=0; string s1;
cout<<"Enter The String:"<<endl;
getline(cin,s1);
len= s1.length();
for(i=0;i<len;i++)
 { if(s1[i]==' ')
 { cout<<"Invalid"<<endl; b=1;
 break;
 }
 }
 if(b==0)
 { if((s1[0]>='A' && s1[0]<='Z') || (s1[0]>='a' && s1[0]<='z') || s1[0]=='_')
 { cout<<"Valid"<<endl; }
 else
    cout<<"Invalid"<<endl;
 }
 }


