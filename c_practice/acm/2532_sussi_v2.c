#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	int N, d, k, c;
	int *sushi, *check, max = 0, count = 0;

	scanf("%d %d %d %d", &N, &d, &k, &c);

	sushi = (int*)malloc(sizeof(int)*(N + k)); //끝 접시의 다음접시는 첫 접시니까 k개 만큼 여유있게 생성
	check = (int*)malloc(sizeof(int)*(d + 1)); //중복값 체크.

	for (i = 0; i < d; i++)//check배열 초기화
	{
		*(check + i) = 0;
	}

	for (i = 0; i < N; i++) //data 입력
	{
		scanf("%d", sushi + i);
		if (i < k)
		{
			*(sushi + i + N) = *(sushi + i);
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = i; j < i + k; j++)
		{
			if (++(*(check + (*(sushi + j)))) == 1) //처음 나타났을때만 카운트 셈
				count++;
		}
		if (*(check + c) == 0) //두번째 루프에서 쿠폰접시가 없었으면
			count++;
		if (max < count) //최대값 저장
			max = count;
		for (j = 0; j < i + k; j++)//check 배열 초기화
		{
			*(check + *(sushi + j)) = 0;
		}
		*(check + c) = 0;//쿠폰 check초기화
		count = 0; //count 초기화
	}
	free(sushi);
	free(check);
	printf("%d", max);
	return 0;
}
