#include <stdio.h>

int main()
{
	int n=5, T, sum=0;
	while(n-->0 && scanf("%d",&T))
	sum+=T*T;
	printf("%d",sum%10);
	return 0;
}
