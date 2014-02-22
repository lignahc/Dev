#include <stdio.h>

int main()
{
	int N, N2, multitab, maxcomputer=0;

	scanf("%d", &N);
	N2 = N;

	while (N-->0)
	{
		scanf("%d", &multitab);
		maxcomputer += (multitab);
	}
	printf("%d", maxcomputer-N2+1);
	return 0;
}