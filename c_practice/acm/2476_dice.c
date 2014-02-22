#include <stdio.h>

typedef struct _man
{
	int first;
	int second;
	int third;
} Man;

int main()
{
	int n, i, j;
	Man *man;
	scanf("%d", &n);
	man=(Man*)malloc(sizeof(Man)*n);


	return 0;
}
