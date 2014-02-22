#include <stdio.h>

int main(int argc, char *argv[])
{
	int a[10], count_=0, i, j, tmp;
	for (i=0; i<10; i++)
	{
		scanf("%d", &tmp);
		a[i]=tmp%42;
	}
	for (i=0; i<10; i++)
	{
		for (j=0; j<i; j++)
		{
			if (a[i] == a[j])
			{
				count_--;
				break;
			}
		}
		count_++;
	}
	printf("%d", count_);
	return 0;
}
