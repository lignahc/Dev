#include <stdio.h>

typedef struct _candidate
{
	int num;
	int point_1;
	int point_2;
	int point_3;
	int sum;
} Cand;

void whoiswinner(Cand *c1, Cand *c2, Cand *c3)
{
	if ((c1->sum == c2->sum) && (c1->point_1 == c2->point_1) && (c1->point_2 == c2->point_2) && (c1->point_3 == c2->point_3))
	{
		printf("%d %d", 0, c1->sum);
		return;
	}
	else
		printf("%d %d", c1->num, c1->sum);
}

void winnersort(Cand *c1, Cand *c2, Cand *c3)
{
	Cand tmp;
	if (c2->sum < c3->sum)
	{
		tmp = *c3;
		*c3 = *c2;
		*c2 = tmp;
	}
	if (c1->sum < c2->sum)
	{
		tmp = *c2;
		*c2 = *c1;
		*c1 = tmp;
	}
	if (c2->sum < c3->sum)
	{
		tmp = *c3;
		*c3 = *c2;
		*c2 = tmp;
	}
	if (c1->sum == c2->sum)
	{
		if (c1->point_3 < c2->point_3)
		{
			tmp = *c2;
			*c2 = *c1;
			*c1 = tmp;
		}
		if ((c1->point_3 == c2->point_3) && (c1->point_2 < c2->point_2))
		{
			tmp = *c2;
			*c2 = *c1;
			*c1 = tmp;
		}
		if ((c1->point_3 == c2->point_3) && (c1->point_2 == c2->point_2) && (c1->point_1 < c2->point_1))
		{
			tmp = *c2;
			*c2 = *c1;
			*c1 = tmp;
		}
	}
}

int main(int argc, char *argv[])
{
	int n, i, data;
	Cand c1 = { 1, 0, 0, 0, 0 };
	Cand c2 = { 2, 0, 0, 0, 0 };
	Cand c3 = { 3, 0, 0, 0, 0 };

	scanf("%d", &n);

	for (i = 0; i < n * 3; i++)
	{
		scanf("%d", &data);
		if (i % 3 == 0) //c1, 후보자1의 점수면
		{
			if (data == 1)
			{
				c1.point_1++;
				continue;
			}
			if (data == 2)
			{
				c1.point_2++;
				continue;
			}
			if (data == 3)
			{
				c1.point_3++;
				continue;
			}
		}
		if (i % 3 == 1) //c2, 후보자2의 점수면
		{
			if (data == 1)
			{
				c2.point_1++;
				continue;
			}
			if (data == 2)
			{
				c2.point_2++;
				continue;
			}
			if (data == 3)
			{
				c2.point_3++;
				continue;
			}
		}
		if (i % 3 == 2) //c3, 후보자3의 점수면
		{
			if (data == 1)
			{
				c3.point_1++;
				continue;
			}
			if (data == 2)
			{
				c3.point_2++;
				continue;
			}
			if (data == 3)
			{
				c3.point_3++;
				continue;
			}
		}
	}

	c1.sum = c1.point_1 * 1 + c1.point_2 * 2 + c1.point_3 * 3;
	c2.sum = c2.point_1 * 1 + c2.point_2 * 2 + c2.point_3 * 3;
	c3.sum = c3.point_1 * 1 + c3.point_2 * 2 + c3.point_3 * 3;

	winnersort(&c1, &c2, &c3);
	whoiswinner(&c1, &c2, &c3);

	return 0;
}
