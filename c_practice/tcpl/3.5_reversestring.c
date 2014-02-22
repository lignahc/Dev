#include <stdio.h>
#include <string.h>

void reverse(char s[]);
/* 문자열 뒤집기 */
int main()
{
  char s[]="hello i am LEE chan gil.";
  printf("%s\n", s);

  reverse(s);
  printf("%s\n", s);

  return 0;
}

void reverse(char s[])
{
  int temp, i, j;

  for (i=0, j = strlen(s)-1; i<j; i++, j--)   {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
}

