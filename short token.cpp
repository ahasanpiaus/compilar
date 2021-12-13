#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    gets(s);
    int n=strlen(s), k=1;
    cout<<"Token "<<1<<"=";
    for(int i=0;i<n; i++)
    {
        if(s[i]== ' ')
        {
            cout<<endl<<"Token"<<++k<<"=";
        }
        else
        {
            cout<<s[i];
        }
    }

}
