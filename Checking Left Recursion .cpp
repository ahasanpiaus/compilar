
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,len,b=0; string s1;
    cout<<"Enter The String:"<<endl;
    getline(cin,s1);
    len= s1.length();
    if(s1[1]=='-' && s1[2]=='>' && (s1[0]>='A' && s1[0]<='Z'))
 {
     if(s1[0]==s1[3])
        cout<<"Left Recursion"<<endl;
     else
        cout<<"Not Left Recursion"<<endl;
     }
     else
 cout<<"Not Production"<<endl;
 }
