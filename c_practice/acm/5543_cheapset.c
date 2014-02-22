#include <stdio.h>

int main()
{
	int a, b, c, d, e;
	
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int s1 = a<(b>c ? c : b) ? a : (b>c ? c : b), s2 = (d>e ? e : d);
	printf("%d\n", s1+s2-50);

	return 0;
}

