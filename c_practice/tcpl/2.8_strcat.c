#include <stdio.h>

void str_concatenate(char s[], char t[]);

/*s[]의 문자열과 t[]의 문자열을 잇는 함수 */
int main()
{
  char s[]="hello i am a cool guy.";
  char t[]="Did you seen me before??";

  str_concatenate(s, t);
  printf("%s\n", s);
  return 0;
}

void str_concatenate(char s[], char t[])
{
  int i=0, j=0;

  while (s[i] != '\0')
    i++;
  while ( (s[i++] = t[j++]) !='\0' )
    ;
}
