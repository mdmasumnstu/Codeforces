#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t,n;
    cin >> t;
 
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a > b) 
			{
				swap(a,b);
			}
        if (a > c) 
			{
			swap(a,c);	
			}
        if (b > c) 
        	{
        	swap(b,c);
			}
 
        n = 5;
 
        while (n> 0) {
            
            if (a <= b && a <= c) {
                a++;
            } else if (b <= a && b <= c) {
                b++;
            } else {
                c++;
            }
       
        n--;
            
        if (a > b) 
			{
				swap(a,b);
			}
        if (a > c) 
			{
			swap(a,c);	
			}
        if (b > c) 
        	{
        	swap(b,c);
			}
        }
 
        cout << a * b * c << endl;
    }
 
    return 0;
}