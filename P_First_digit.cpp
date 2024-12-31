#include<iostream>
using namespace std;
int main()
{
   string s;
   cin>>s;
 
   int n = s.length();
 
   for(int i=0;i<n;i++)
   {
        if(s[0]%2==0)
        {
            cout<<"EVEN"<<endl;
            break;
        }
        else{
            cout<<"ODD"<<endl;
            break;
        }
   }
}