#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	
	printf("%d",(n|(1<<k)));
}
