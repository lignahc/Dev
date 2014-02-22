#include <stdio.h>

int main()
{
  float f;
  int i;
  printf("실수를 입력하세요 : ");
  scanf("%f", &f);
  i=abs( (int)(f*100)-(int)f*100 );//12.3456 에서 34 만 출력하는겨
  printf("i = %d\n",i);
}

