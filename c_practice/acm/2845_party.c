#include <stdio.h>

int main()
{
	int i, n[7], sum;
	
	for(i=0;i<7;scanf("%d",n+i++));
	for(i=2,sum=n[0]*n[1];i<7;printf("%d ",n[i++]-sum));
	return 0;
}
