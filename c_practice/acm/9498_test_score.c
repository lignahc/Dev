#include <stdio.h>

int main(int argc, char *argv[])
{
	int score, deg;
	scanf("%d", &score);
	deg = score/10;

	switch (deg)
	{
	case 10 :
	case 9 :
		printf("A");
		break;
	case 8 :
		printf("B");
		break;
	case 7 :
		printf("C");
		break;
	case 6 :
		printf("D");
		break;
	default :
		printf("F");
	}
	return 0;
}
