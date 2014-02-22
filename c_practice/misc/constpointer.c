#include <stdio.h>

int main()
{
  int a;
  int b;
  int* const pa = &a;

  *pa = 3;

  return 0;
}
