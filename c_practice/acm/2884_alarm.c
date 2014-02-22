#include <stdio.h>

int main()
{
	int h, m;
	scanf("%d%d", &h, &m);
	printf("%d %d", m>=45?h:h>0?h-1:24+h-1, m>=45?m-45:60+m-45);
	return 0;
}
