#include <stdio.h>

#define BUFSIZE 100

static char buf[BUFSIZE];
static int bufp = 0;

int getch(void)
{
  if (bufp > 0)
    return buf[--bufp];
  else
    getchar();
}

void ungetch(int c)
{
  if (bufp >= BUFSIZE)
    printf("ungetch: too many character\n");
  else
    buf[bufp++] = c;
}

