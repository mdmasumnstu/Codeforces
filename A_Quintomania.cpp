#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,b,m=0;
        cin>>n;
        int a[n];
 
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
 
        for(i=0;i<n-1;i++)
        {
            b=abs(a[i + 1] - a[i]);
 
            if(b!=5 && b!=7)
            {
                m++;
            }
            
        }
        if(m==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    }
}