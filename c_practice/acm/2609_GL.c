#include <stdio.h>

int main()
{
	int a, b, G;

	scanf("%d %d", &a, &b);
	for(G=a*b ; a!=b ; (a>b) ? (a-=b) : (a==b ? a : (b-=a)));
	printf("%d\n%d", a, G/a);
	return 0;
}
