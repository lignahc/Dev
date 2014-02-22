#include <stdio.h>

int main()
{
	int n, i=0;
	
	scanf("%d", &n);
	while (n-->0) {
		printf("%d\n", ++i);
	}
	return 0;
}
