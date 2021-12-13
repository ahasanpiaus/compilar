#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,len,b=0,n;
    string s1;
    cout<<"String Number:"<<endl;
    cin>>n;
    getline(cin,s1);
    for(i=0;i<n;i++)
 {
     cout<<"Enter The String:"<<endl;
     getline(cin,s1);
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
 }
