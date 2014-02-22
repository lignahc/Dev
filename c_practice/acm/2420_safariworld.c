#include <stdio.h>

int main()
{
	long long int a, b, diff;
	
	scanf("%lld %lld", &a, &b);
	diff = a-b;
	
	if (diff<0)
		diff=diff*(-1);
	printf("%lld\n", diff);
	
	return 0;
}
	
