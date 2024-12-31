#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string a,b;
		char temp;
		cin>>a>>b;
		
		temp=a[0];
		a[0]=b[0];
		b[0]=temp;
		cout<<a<<" "<<b<<endl;
	}
}