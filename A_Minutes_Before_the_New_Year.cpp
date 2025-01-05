#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m,min,day=1440;
        cin>>h>>m;
        min= (h*60)+(m);

        cout<<abs((day-min))<<endl;

    }
}