#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) 
    {
        string a;
        cin >> a;
        int n = a.length();
        char b[101]; 
 
        for (int j = 0; j < n; ++j) 
        {
            if (a[j] == 'p')
            {
                b[n - j - 1] = 'q';
            }
            else if (a[j] == 'q')
            {
            b[n - j - 1] = 'p';
            }
            else 
            {
                b[n - j - 1] = a[j];
            }
        
            b[n] = '\0';
        }cout << b << endl;
    }
 
    return 0;
}