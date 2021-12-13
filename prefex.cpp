#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{ stack<int>
stack; int b,c,i,len;
cout<<"Enter The String:"<<endl;
string a; getline(cin,a); len=
a.length(); for(i=len-1;i>=0;i--)
{if(a[i] >= '0' && a[i] <= '9'){stack.push(a[i]-'0');}
else if(a[i] == '+' ||a[i] == '-' ||a[i] == '*' ||a[i] == '/')
{b= stack.top();
stack.pop(); c=
stack.top();
stack.pop();
switch(a[i])
{case '+':
stack.push(b+c);
break; case '-':
stack.push(b-c);
break; case '*':
stack.push(b*c);
break; case '/':
stack.push(b/c); break;
}}}
cout<<"Answer:"<<endl;
cout<<stack.top();}
