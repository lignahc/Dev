#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, multiply, divided_by_10, digit[10] = {0, };
	int i;

	scanf("%d %d %d", &a, &b, &c);
	multiply = a*b*c;

	while (multiply > 0)
	{
		divided_by_10 = multiply / 10;
		digit[multiply - divided_by_10 * 10]++;
		multiply = divided_by_10;
	}

	for (i = 0; i<10; i++)
	{
		printf("%d\n", digit[i]);
	}

	return 0;
}
