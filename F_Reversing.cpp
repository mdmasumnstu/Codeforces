#include<iostream>
using namespace std;
int main()
{
	int t;
 
	cin>>t;
	
	long long int i,a[t];
	for(i=0;i<t;i++)
	{
		cin>>a[i];
	}
		
	for(i=(t-1);i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
}