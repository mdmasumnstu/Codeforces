#include <iostream>
using namespace std;
 
int main() 
{
    int t, i;
    cin >> t;
    long long a[t];
 
    for (i = 0; i < t; i++) 
    {
        cin >> a[i];
    }
 
    int isPalindrome = 1; 
    for (i = 0; i < t / 2; i++) 
    {
        if (a[i] != a[t - 1 - i]) 
        {
            isPalindrome = 0;
            break;
        }
    }
 
    if (isPalindrome == 1) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }
 
    return 0;
}