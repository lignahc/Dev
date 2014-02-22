#include <stdio.h>
#include <ctype.h>

int main()
{
	int H, M, S, h, m, s, hh, mm, ss;
	int SS, SSS, diff;
	scanf("%d:%d:%d %d:%d:%d", &h, &m, &s, &H, &M, &S);

	SS = s+m*60+h*3600;
	SSS = S+M*60+H*3600;
	if (SS>SSS)
		diff = SSS+24*3600-SS;
	else
		diff = SSS-SS;

	hh = diff/3600;
	mm = (diff%3600)/60;
	ss = diff%3600%60;

	printf("%s%d:%s%d:%s%d", hh<10?"0":"", hh, mm<10?"0":"", mm, ss<10?"0":"", ss);

	return 0;
}