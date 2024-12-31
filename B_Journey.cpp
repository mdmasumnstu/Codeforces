#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long n, a, b, c,total,sum,cycles;
        cin >> n >> a >> b >> c;
 
        
        int day=0;
        total=0;
        sum = a + b + c;
    
        cycles = n / sum;
        
        total = cycles * sum;
        
        day = cycles * 3;
    
        if (total>= n) 
        {
            cout<<day<<endl;
            continue;
        }
   
        if (total+a >= n) 
        {
            cout<<day + 1<<endl;
            continue;
        }
        
        if (total + a + b >= n) 
        {
            cout<<day + 2 <<endl;
           continue;
        }
        
        cout<<day + 3<<endl;
    }
    return 0;
}