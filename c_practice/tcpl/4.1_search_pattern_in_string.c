#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[], int limit);
int strindex(char s[], char t[]);

char pattern[] = "ould";

/* 문자열 내 패턴 찾기 프로그램  */
int main()
{
  char line[MAXLINE]; 
  int found = 0;

  while (get_line(line, MAXLINE) > 0)
    if (strindex(line, pattern) >= 0) {
      printf("%s", line);
      found++;
    }
  return found;
}

int get_line(char s[], int limit) /* s[]에 문자열을 입력받고 길이를 리턴 */
{
  int c, i;

  i=0;

  while (--limit > 0 && (c=getchar()) !=EOF && c !='\n')
    s[i++]=c;
  if (c == '\n')
    s[i++]=c;
  s[i]='\0';

  return i;
}

int strindex(char s[], char t[]) /* s에서 t문자열의 위치를 리턴 */
{
  int i, j, k;

  for (i=0; s[i] !='\0'; i++) {
    for (j=i, k=0; t[k] !='\0' && s[j]==t[k]; j++, k++)
      ;
    if (k > 0 && t[k] =='\0')
      return i;
  }
  return -1; /* 없으면 -1 return */
}
