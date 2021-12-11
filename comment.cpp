#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    gets(s);
    int n = strlen(s);
    if(s[0] == '/' && s[1] == '/')
        cout<<"single line comment";
    else if(s[0] == '/' && s[1] == '*' && s[n-2] == '*' && s[n-1] == '/')
    cout<<"Multi line comment";
    else
        cout<<"Normal string";

}
