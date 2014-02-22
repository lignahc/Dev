#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int get_line(char *line, int max);
/* 문자열 내 패턴 찾기 프로그램 */
/* -x는 패턴과 일치하지 않는 라인 출력하는 옵션
   -n은 행번호를 붙이는 옵션 */

int main(int argc, char *argv[])
{
  char line[MAXLINE];
  long line_no=0;
  int c, except=0, number=0, found=0;

  while (--argc>0 && (*++argv)[0] == '-')
    while ((c=*++argv[0]))
      switch (c) {
        case 'x' :
          except =1;
          break;
        case 'n' :
          number =1;
          break;
        default :
          printf("find : Illegal option %c\n", c);
          argc=0;
          found = -1;
          break;
      }
  if (argc != 1)
    printf("Usage : find -x -n pattern\n");
  else
    while (get_line(line, MAXLINE) > 0) {
      line_no++;
      if ( (strstr(line, *argv) != NULL) != except) {
        if (number)
          printf("%ld:", line_no);
        printf("%s", line);
        found++;
      }
    }
  return found;
}

int get_line(char *line, int max) /* 문자열 입력받고 길이를 리턴 */
{
  char *p;
  int c;
  p=line;

  while (max-- >=0 && (c=getchar()) !=EOF) {
    *p++ = c;
    if (c=='\n')
      break;
  }
  *p='\0';

  return p-line;
}

