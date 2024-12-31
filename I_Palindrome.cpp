#include <iostream>
#include<string.h>
using namespace std;
 
int main() 
{
    string s,b;
    cin>>s;
    int i,n;
    n = s.length();
    
    for(i=n-1;i>=0;i--)
    {
        b+=s[i];
    }
 
    if(s==b)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 
    
}