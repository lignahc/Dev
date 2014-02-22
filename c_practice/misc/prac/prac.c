#include <stdio.h>
#include <stdlib.h>

int fibo(int n);

int main()
{
  int T, i;
  int *cases;

  scanf("%d", &T);
  cases = (int *) malloc(T * sizeof(int));

  for (i=0; i<T; i++)
    scanf("%d", cases+i);
  for (i=0; i<T; i++) {
    printf("%d %d\n", i <= 0 ? 1 : fibo(cases[i-1]), i < 0 ? 1 : fibo(cases[i]));
  }
  return 0;
}

int fibo(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return fibo(n-1) + fibo(n-2);
}
