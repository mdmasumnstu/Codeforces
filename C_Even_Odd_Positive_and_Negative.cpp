#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
 
        int i,Even=0,Odd=0,pos=0,neg=0;
        for(i=0;i<t;i++)
        {
            int n;
            cin>>n;
 
            if(n%2==0)
            {
                Even++;
            }
            else if(n%2!=0)
            {
                Odd++;
            }
        
        if (n > 0)
            pos++;
        else if (n < 0)
            neg++;
        }
        cout<<"Even: "<<Even<<endl;
        cout<<"Odd: "<<Odd<<endl;
        cout<<"Positive: "<<pos<<endl;
        cout<<"Negative: "<<neg<<endl;
    }