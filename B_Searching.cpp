#include <iostream>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    int a[n];
    
    for (int i=0;i<n;i++) 
    {
        cin >> a[i];
    }
    
    int b;
    cin >> b;
 
    int pos = -1;
    for (int i=0;i<n;i++) 
    {
        if (a[i] == b) 
        {
            pos = i;
            break;
        }
    }
 
    cout << pos << endl;
    
    return 0;
}