#include <stdio.h>

/* 문자 c를 모두 제거하는 함수 (매개변수가 char c가 아닌 int c인것 주의)*/
void squeeze(char s[], int c);

main()
{
  char s[] = "hello, i am chan_gil. how are you? fine? cocoa";
  printf("%s\n", s);
  squeeze(s, 'c');
  printf("%s\n", s);
}

void squeeze(char s[], int c)
{
  int i, j;

  for (i=j=0; s[i] !='\0'; i++)
    if (s[i] !=c)
      s[j++]=s[i];
  s[j]='\0';
}
