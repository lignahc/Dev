#include <stdio.h>

int main(int argc, char *argv[])
{
	int a[9], max_num;
	int i;

	for (i=0; i<9; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i=0, max_num=0; i<9; i++)
	{
		if (a[max_num]<a[i])
		{
			max_num = i;
		}
	}
	printf("%d\n%d", a[max_num], max_num+1);
	return 0;
}
