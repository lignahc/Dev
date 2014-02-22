#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j, idx_i=0, idx_j=0, a[9][9];

	for (i=0; i<9; i++)
	{
		for (j=0; j<9; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i=0; i<9; i++)
	{
		for (j=0; j<9; j++)
		{
			if (a[idx_i][idx_j]<=a[i][j])
			{
				idx_i = i;
				idx_j = j;
			}
		}
	}
	printf("%d\n%d %d", a[idx_i][idx_j], idx_i+1, idx_j+1);
	return 0;
}
