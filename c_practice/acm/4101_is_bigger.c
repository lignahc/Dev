#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	for (scanf("%d %d", &a, &b); a != 0 && b != 0; scanf("%d %d", &a, &b))
	{
		if (a>b)
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
	return 0;
}
