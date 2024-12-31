#include <iostream>
using namespace std;
 
int main() 
{
    int N, K,box;
    cin >> N >> K;
    
    box = (N + K - 1) / K;
 
    cout << box << endl;
 
    return 0;
}
 