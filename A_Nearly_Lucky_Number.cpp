#include<iostream>
using namespace std;
int main()
{
	int count=0,i;
	string s;
	cin>>s;
	
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='4' || s[i]=='7')
		{
			count++;
		}
	}
	if(count==4 || count==7)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}