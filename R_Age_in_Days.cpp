#include<iostream>
using namespace std;
int main()
{
	int d,y,m;
	cin>>d;
	
	y=d/365;
	m=(d%365)/30;
	d= (d%365)%30;
	
	cout<<y<<" years"<<endl;
	cout<<m<<" months"<<endl;
	cout<<d<<" days"<<endl;
}