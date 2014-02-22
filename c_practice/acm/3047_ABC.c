#include <stdio.h>

int main(int argc, char *argv[])
{
	int a[3], i, j, tmp;
	char ch[3];
	scanf("%d%d%d ", &a[0], &a[1], &a[2]);
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
	scanf("%c%c%c", &ch[0], &ch[1], &ch[2]);
	printf("%d %d %d", a[ch[0] - 65], a[ch[1] - 65], a[ch[2] - 65]);
	return 0;
}
