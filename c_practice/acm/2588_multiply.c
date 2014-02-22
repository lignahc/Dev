#include <stdio.h>
#include <math.h>

int main()
{
	int n, m, i;
	scanf("%d%d",&n,&m);
	for(i=0 ; i<3 ; i++)
		printf("%d\n", n*(m/(int)pow(10,i)%10));
	printf("%d",n*m);
	return 0;
}
