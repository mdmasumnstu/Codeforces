#include <iostream>
using namespace std;
 
void maxmin(int n) 
{
    int a[n], i;
    for (i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
 
    int min = a[0], max = a[0];
 
    for (i = 1; i < n; i++) 
    {
        if (a[i] < min) 
        {
            min = a[i];
        }
        if (a[i] > max) 
        {
            max = a[i];
        }
    }
    cout << min << " " << max << endl;
}
 
int main() 
{
    int a;
    cin >> a;
    maxmin(a);
 
    return 0;
}