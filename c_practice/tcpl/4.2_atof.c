#include <stdio.h>
#include <ctype.h>

//double a_to_f(char s[]);
/* char 숫자를 float로 바꾸기 */
int main()
{
  int c, i=0;
  char s[100];
  double a_to_f(char s[]);

  while ( (c=getchar()) !=EOF && c !='\n')
    s[i++]=c;
  if (c =='\n')
    s[i++]=c;
  s[i]='\0';

  printf("%f", a_to_f(s));

  return 0;
}

double a_to_f(char s[])
{
  double val, power;
  int i, sign;

  for (i=0; isspace(s[i]); i++)
    ;
  sign = (s[i]=='-') ? -1 : 1;
  if (s[i]=='+' || s[i]=='-')
    i++;
  for (val=0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i]-'0');
  if (s[i]=='.')
    i++;
  for (power=1.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i]-'0');
    power *= 10.0;
  }
  return sign*val/power;
}


