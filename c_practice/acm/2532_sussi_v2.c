#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	int N, d, k, c;
	int *sushi, *check, max = 0, count = 0;

	scanf("%d %d %d %d", &N, &d, &k, &c);

	sushi = (int*)malloc(sizeof(int)*(N + k)); //�� ������ �������ô� ù ���ôϱ� k�� ��ŭ �����ְ� ����
	check = (int*)malloc(sizeof(int)*(d + 1)); //�ߺ��� üũ.

	for (i = 0; i < d; i++)//check�迭 �ʱ�ȭ
	{
		*(check + i) = 0;
	}

	for (i = 0; i < N; i++) //data �Է�
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
			if (++(*(check + (*(sushi + j)))) == 1) //ó�� ��Ÿ�������� ī��Ʈ ��
				count++;
		}
		if (*(check + c) == 0) //�ι�° �������� �������ð� ��������
			count++;
		if (max < count) //�ִ밪 ����
			max = count;
		for (j = 0; j < i + k; j++)//check �迭 �ʱ�ȭ
		{
			*(check + *(sushi + j)) = 0;
		}
		*(check + c) = 0;//���� check�ʱ�ȭ
		count = 0; //count �ʱ�ȭ
	}
	free(sushi);
	free(check);
	printf("%d", max);
	return 0;
}
