#include <iostream>
#include <string>
using namespace std;
 
int main() 
{
    int N;
    cin >> N;
    string A;
    cin >> A;
 
    int sum = 0;
 
    for (int i = 0; i < N; i++) 
    {
        sum += A[i] - '0'; 
    }
 
    cout << sum << endl;
 
    return 0;
}