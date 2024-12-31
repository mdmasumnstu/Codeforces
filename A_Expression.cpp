#include <iostream>
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
 
    int result1 = a + b + c;
    int result2 = a + (b * c);
    int result3 = (a + b) * c;
    int result4 = a * b * c;
    int result5 = (a * b) + c;
    int result6 = a * (b + c);
 
    int max_val = result1;
    if (result2 > max_val) 
        max_val = result2;
    if (result3 > max_val) 
        max_val = result3;
    if (result4 > max_val) 
        max_val = result4;
    if (result5 > max_val) 
        max_val = result5;
    if (result6 > max_val) 
        max_val = result6;
 
    cout << max_val << endl;
 
    return 0;
}