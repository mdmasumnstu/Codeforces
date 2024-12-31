#include <iostream>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    string s,b;
    cin>>s;
    int i,n,sum=0;
    n = s.length();
 
    for(i=0;i<n;i++)
    {
        sum=sum+s[i] - '0';
    }
    cout<<sum<<endl;
}