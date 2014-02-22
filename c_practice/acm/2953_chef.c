#include <stdio.h>

int main()
{
	int score, man[5], sum=0, top=0;
	int i, j=0;


	for (i=0; i<20; i++ )
	{
		scanf("%d", &score);
		sum+=score;
		if ((i+1)%4==0)
		{
			man[j] = sum;
			if (man[top]<sum)
			{
				top=j;
			}
			j++;
			sum=0;
		}
	}

	printf("%d %d", top+1, man[top]);

	return 0;
}
