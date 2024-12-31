#include<iostream>
 #include<iomanip>
using namespace std;
int main()
{
	double a,area;
	cin>>a;
	
	area=3.141592653*a*a;
	cout<<setprecision(11)<<area<<endl;
}