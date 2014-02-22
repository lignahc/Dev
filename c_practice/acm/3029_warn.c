#include <stdio.h>

int main()
{
   int h1, m1, s1;
   int h2, m2, s2;
   int ss;
   scanf("%d:%d:%d", &h1, &m1, &s1);
   scanf("%d:%d:%d", &h2, &m2, &s2);

   ss = (h2-h1)*3600 + (m2-m1)*60 + s2-s1;
   if (ss <= 0)
	   ss += 24*3600;
   printf("%02d:%02d:%02d\n", ss/3600, ss/60%60, ss%60);

   return 0;
}
