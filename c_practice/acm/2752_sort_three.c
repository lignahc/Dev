#include <stdio.h>

int main()
{
	int a[3], tmp, i, j;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 3; j++)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}