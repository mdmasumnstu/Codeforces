#include <iostream>
using namespace std;
 
int main() 
{
        int n,m=0;
        cin >> n;
 
        for (int i = 2; i < n/2; ++i) 
        {
           if(n%i==0)
           {
            m++;
           }
        }
 
        if(m==0)
        {
            cout <<"YES"<< endl;
        }
 
        else
        {
             cout<<"NO"<<endl;
        }
 
    return 0;
}