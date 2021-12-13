#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s,a;
    getline (cin, s);
    int l,i,b,j=1;
    l = s.size();
    cout<<"token 1 : ";
    for(i=0;i<l;i++){
        if(s.at(i)==' '){
            b = i;
            break;
        }
        b = i;
    }
    a = s.substr(0,b+1);
    cout<<a;
    for(i=b+1;i<l;i++){
        if(s.at(i)==' '){
            cout<<endl<<"token "<<++j<< " : ";
            a = s.substr(b+1,i-b);
            b=i;
            cout<<a;
        }
    }
    cout<<endl<<"token "<<++j<< " : ";
    a = s.substr(b+1,l-1-b);
    cout<<a;
    return 0;
}
