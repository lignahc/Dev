#include <stdio.h>
//입력된 문자의 개수를 세는 프로그램
int main()
{
  long int nc; //the number of char

  nc =0;

  while ( getchar() != EOF)
  {
    nc++;
  }
  printf("%ld\n",nc);

  return 0;
}

