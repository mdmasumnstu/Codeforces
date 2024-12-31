#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int a[]={x,y,z};
    
    sort(a,a+3);
    cout<<(a[1]-a[0])+(a[2]-a[1])<<endl;
}