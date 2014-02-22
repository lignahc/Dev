#include <stdio.h>
#include <ctype.h>

int a_to_i(char s[]);
/*  */
int main()
{
  char s[10]="12345";
  
  printf("%s -> %d\n", s, a_to_i(s));

  return 0;
}

/* ASCII to integer (아스키 숫자를 그냥 숫자로) */
int a_to_i(char s[])
{
  int i, n, sign;

  for (i=0; isspace(s[i]); i++) /* 처음부터 빈칸인건 건너뜀 */
    ;
  sign = ( s[i] =='-' ) ? -1 : 1;
  if (s[i] == '+' || s[i] == '-') /* 부호는 건너뜀 */
    i++;
  for (n=0; isdigit(s[i]); i++) /* 대단하다.. */
    n = 10*n + (s[i] - '0');
  return sign*n;
}


