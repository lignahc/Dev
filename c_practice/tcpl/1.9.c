#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[], int lim);
void copy(char to[], char from[]);

/*가장 긴 행을 출력하는 후로그람*/
int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = get_line(line, MAXLINE)) > 0)
    if (len>max) {
      max = len;
      copy(longest, line);
    }
  if (max>0)
    printf("%s", longest);
  return 0;
}

/*getchar로 입력받아서 s[]에 넣고 그 문장의 길이를 리턴*/
int get_line(char s[], int lim)
{
  int c, i;

  for (i=0; i<lim && (c=getchar()) !=EOF && c !='\n'; ++i)
    s[i] = c;
  if (c =='\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* from[]의 문자열을 to[]로 복사 (strcpy)*/
void copy(char to[], char from[])
{
  int i =0;

  while ((to[i]=from[i]) !='\0')
    ++i;
}

