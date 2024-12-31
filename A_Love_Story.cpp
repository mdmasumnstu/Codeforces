#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string target="codeforces";
	while(n--)
	{
		string t;
		cin>>t;
		int m=0,i;
		
		for(i=0;i<10;i++)
		{
			if(t[i]!=target[i])
			{
				m++;
			}
		}
		cout<<m<<endl;
	}
	
}