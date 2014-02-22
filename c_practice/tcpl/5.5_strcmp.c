#include <stdio.h>

int str_cmp(char *s, char *t);
/*  */
int main()
{
  char s[]="aaa";
  char t[]="aaa";

  printf("%s와 %s=>%d\n", s, t, str_cmp(s, t));

  return 0;
}

int str_cmp(char *s, char *t)
{
  for ( ; *s==*t; s++, t++)
    if (*s=='\0')
      return 0;

  return *s - *t;
}

