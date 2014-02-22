#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m, cmp, T = 0, F = 0;
	int i, j;
	int *arr_n;

	scanf("%d", &n);
	arr_n = (int *)malloc(n*sizeof(int));
	i = 0;
	while (i < n) {
		scanf("%d", arr_n + i++);
	}
	scanf("%d", &m);
	//arr_m = (int *)malloc(m*sizeof(int));
	i = 0;
	while (i < m && scanf("%d", &cmp)) {
		for (j = 0; j < n; j++) {
			if (cmp == *(arr_n + j)) {
				T++;
			}
		}
		printf("%d\n", T>0 ? 1 : 0);
		T = 0;
		i++;
	}

	return 0;
}