#include<stdio.h>
int main()
{
	int a;
	long long int b;
	char ch;
	float d;
	double c;
	
	scanf("%d %lld %c %f %lf",&a,&b,&ch,&d,&c);
	printf("%d\n",a);
	printf("%lld\n",b);
	printf("%c\n",ch);
	printf("%.2f\n",d);
	printf("%.1lf\n",c);
	
	
	return 0;
}