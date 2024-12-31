#include <iostream>
#include<algorithm>
#include<cstring>
 
using namespace std;
 
int main()
{
    string m,n;
 
    cin>>m;
	cin>>n;
	
	
    reverse(n.begin(),n.end());
	if(m==n)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
    
    
    return 0;
}