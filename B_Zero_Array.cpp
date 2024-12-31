#include<iostream>
using namespace std;
int main()
{
	int n;
    cin >> n;
    long long a[n],sum = 0, mx = 0;
    
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; //input
		
		if(a[i]>mx)
		{
			mx=a[i];  //max
		}
		sum=sum+a[i];  //sum
	}
	
	
	if(mx<=sum/2 && sum%2==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
 
}