#include <iostream>
#include <algorithm>
using namespace std;
 
int main() 
{
    int t; 
    cin >> t;
 
    while (t--) 
    {
        long long m, a, b, c,seat1,seat2,rem1,rem2,f,k,total; 
        cin >> m >> a >> b >> c;
 
        seat1 = min(m, a); 
        seat2 = min(m, b);
 
        rem1 = m - seat1;
        rem2 = m - seat2;
 
        f = rem1 + rem2;
        k= min(c, f);
 
        total= seat1 + seat2 + k;
 
        cout << total<< endl;
    }
 
    return 0;
}