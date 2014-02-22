#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T, T2, T3, *answer;
	scanf("%d", &T);
	T3 = T2 = T;
	answer = (int*)malloc(sizeof(int)* T);

	while (T>0)
	{
		int N, tmp, sum = 0;

		scanf("%d", &N);

		while (N-->0)
		{
			scanf("%d", &tmp);
			sum += tmp;
		}
		*(answer + (T3 - T)) = sum;
		T--;
	}

	while (T2>0)
	{
		printf("%d\n", *(answer + (T3 - T2)));
		T2--;
	}
	free(answer);
	return 0;
}
