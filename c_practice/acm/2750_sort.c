#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int T, *a, i, j, tmp;
	scanf("%d", &T);
	a = (int*)malloc(sizeof(int)*T);

	for (i = 0; i < T; i++)
	{
		scanf("%d", a + i);
	}
	for (i = 0; i < T; i++)
	{
		for (j = i + 1; j < T; j++)
		{
			if (*(a + i) > *(a + j))
			{
				tmp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = tmp;
			}
		}
	}
	for (i = 0; i < T; i++)
	{
		printf("%d\n", *(a + i));
	}
	return 0;
}
