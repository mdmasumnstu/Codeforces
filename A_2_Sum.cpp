#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    long long x,sum=0;
    cin >> n >> x;

    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int l = 0, r = n - 1;
    while (l < r) 
    {
        sum = a[l] + a[r];
        if (sum == x) 
        {
            cout << "YES" << endl;
            return 0;
        } 
        
        else if (sum < x) 
        {
            l++;
        } 
        else 
        {
            r--;
        }
    }

    cout << "NO" << endl;
    return 0;
}
