#include <stdio.h>

int main()
{
	int N, P, a[1000];
	int i, j, count=0;
	scanf("%d %d", &N, &P);
	a[0] = N*N%P;

	for (i = 1; i < 1000; i++)
	{
		a[i] = a[i - 1] * N%P;
		count++;
		for (j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				printf("%d", count);
				return 0;
			}
		}
	}
}
