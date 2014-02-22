#include <stdio.h>
int str_len(char *str);
int main()
{
  char str[100];
  
  printf("문자를 입력하세요 : ");
  scanf("%s", str);
  printf("%s", str);

  printf("이 문자열의 길이는 : %d\n", str_len(str));
  return 0;
}
int str_len(char *str)
{
  int i=0;
  while(str[i])
  {
    i++;
  }
  return i;
}



