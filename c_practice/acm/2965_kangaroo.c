#include <stdio.h>

int main()
{
	int a, b, c, diff;

	scanf("%d %d %d", &a, &b, &c);

	if ( (b-a) < (c-b) )
	{
		diff = c-b-1;
	}
	else
		diff = b-a-1;
	printf("%d\n", diff);
	return 0;
}
