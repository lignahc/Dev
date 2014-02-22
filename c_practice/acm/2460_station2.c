#include <stdio.h>

int main()
{
	int max, i, in, out, s[10]={0, 0, 0, 0};
	for(i=0 ; i<10 ; scanf("%d %d", &out, &in), (s[i]=in-out+((i!=0)?s[i-1]:0))) i++;
	
	for(i=1,max=s[0];i<10;i++)
		if (s[i]>max)
			max=s[i];
			
	printf("%d", max);
	return 0;
}
