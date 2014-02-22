#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	double divi;

	scanf("%d %d", &a, &b);
	divi = (double)a/(double)b;

	printf("%.16lf", divi);

	return 0;
}
