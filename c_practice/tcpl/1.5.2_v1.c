#include <stdio.h>
/* 입력되는 문자 세기*/
main()
{
  long nc=0;

  while(getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
}

