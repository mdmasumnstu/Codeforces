#include <iostream>
using namespace std;
 
int main() 
{
        int t;
        cin>>t;
 
        for(int i=t;i>0;i--)
        {
            for(int j = 0; j < i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
 
    return 0;
}