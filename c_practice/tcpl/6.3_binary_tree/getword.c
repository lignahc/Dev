#include <stdio.h>
#include <ctype.h>

int getword(char *word, int lim)
{
  int c, getch(void);
  void ungetch(int);
  char *w=word;

  while (isspace(c=getch())) /* 처음부터 있는 space건너뜀 */
    ;
  if (c != EOF)
    *w++=c; /* 일단 한 문자 받고 */
  if (!isalpha(c)) { /* 그게 문자가 아니면 */
    *w = '\0'; /* \0로 마무리 하고 그 문자 리턴 */
    return c;
  }

  for (; --lim>0; w++) /* 문자여서 위에 if통과하면 계속 문자 받음 */
    if (!isalnum(*w = getch())) { /* 하나 받아서 *w에 넣고 */
      ungetch(*w); /* 숫자도 문자도 아니면 ungetch */
      break;
    }
  *w = '\0'; /* 입력 다 받으면 \0로 마무리 하고 */
  return word[0]; /* 그 문자열의 첫 문자 리턴 */
}

#define BUFSIZE 100

static char buf[BUFSIZE];
static int bufp = 0;

int getch(void)
{
  if (bufp > 0)
    return buf[--bufp];
  else
    return getchar();
}

void ungetch(int c)
{
  if (bufp >= BUFSIZE)
    printf("ungetch: too many character\n");
  else
    buf[bufp++] = c;
}
