#include <stdio.h>

int main()
{
	int cases = 7, n, min, sum = 0;
	while (cases-->0 && scanf("%d", &n))
		if (n&01) {
			sum+=n;
			sum==n?min=n:min>n?min=n:(n=n);
			}
	sum==0?printf("-1"):printf("%d\n%d", sum, min);
	return 0;
}
