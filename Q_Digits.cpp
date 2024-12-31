#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string N;
        cin >> N;
 
        reverse(N.begin(), N.end());
 
        int n= N.size();
        
        for (int i = 0; i < n; ++i) 
        {
            cout << N[i]<<" ";
        }
        cout << endl;
    }
    return 0;
}
