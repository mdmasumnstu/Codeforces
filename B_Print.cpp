#include <iostream>
#include <cstring>
using namespace std;
 
void print(int a)
{
    for(int i=1;i<=a;i++)
    {
        { 
            if (i > 1) 
            { 
             cout << " "; 
            } 
             cout << i; 
        } 
       
    }
}
 
int main() 
{
    int a;
    cin>>a;
    print(a);
    return 0;
}