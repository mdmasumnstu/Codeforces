#include<iostream>
using namespace std;
int main()
{
    int n,even=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
            even++;
        }
        
    }
    if(even==0)
    {
        cout<<"-1"<<endl;
    }
}