#include <stdio.h>

int main()
{
	int n, T, j=0,p, c=0;
	scanf("%d", &T);
	while(T-->0&&scanf("%d", &n)) {
		for(p=0,j=1;j<=n;n%j==0?p++:(n=n),j++);
		if(p==2)c++;
	}
	printf("%d", c);
	return 0;
}
