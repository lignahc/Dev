#include <stdio.h>
#include <string.h>

void i_to_a(int n, char s[]);
void reverse(char s[]);

char s[10];
/* segmentation fault 왜그런지 잘 모르겠어.......옘병 */
/* 30줄에 괄호가 문제였다......하...아....아.... */
int main()
{
  int a;
  scanf("%d", &a);

  i_to_a(a, s);
  printf("integer %d는 ASCII로 %s이다.", a, s);

  return 0;
}

void i_to_a(int n, char s[]) /* integer를 char로 */
{
  int i, sign;

  if ((sign=n) < 0)
    n = -n;
  i = 0;
  do {
    s[i++] = n%10 + '0';
                          /*  } while ((n/=10 >0));틀린부분  */
  } while ((n/=10) >0);
  if (sign<0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void reverse(char s[])
{
  int c, i, j;

  for (i=0, j=strlen(s)-1; i<j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

