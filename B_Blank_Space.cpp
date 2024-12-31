#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        
        int max_length = 0;
        int current_length = 0;
        
        for (int i = 0; i < n; ++i) 
        {
            int num;
            cin >> num;
            
            if (num == 0) 
            {
                current_length++;
                if (current_length > max_length) 
                {
                    max_length = current_length;
                }
            } 
            else 
            {
                current_length = 0;
            }
        }
        
        cout << max_length << endl;
    }
 
    return 0;
}