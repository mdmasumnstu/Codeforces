#include <iostream>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    
    if(k==0)
    {
        cout<<n<<endl;
    }
    
    for(int i=0;i<k;i++)
    {
        if(n%10!=0)
        {
            n--;
        }
        else
        {
            n=n/10;
        }
    }
    cout<<n<<endl;
 
    return 0;
}