#include <iostream>
#include <algorithm>
using namespace std;
 
int main() 
{
    int N;
    cin >> N;  
    
    int max_num = 0, num;
    for (int i = 0; i < N; ++i) 
    {
        cin >> num;  
        max_num = max(max_num, num);  
    }
 
    cout << max_num << endl; 
 
    return 0;
}