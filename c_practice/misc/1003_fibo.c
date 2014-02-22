#include <stdio.h>
#include <stdlib.h>
 
int fibo(int n);
int count_0;
int count_1;
 
int main()
{
  int T, i;
  int *cases;
       
  scanf("%d", &T);
  cases = (int *) malloc(T * sizeof(int));
  
  for (i=0; i<T; i++)
    scanf("%d", cases+i);
  for (i=0; i<T; i++) {
    fibo(*(cases+i));
    printf("%d %d\n", count_0, count_1);
    count_0 = count_1 = 0;
  }
  return 0;
}
 
int fibo(int n)
{
  if (n == 0) {
    count_0++;
    return 0;
  } else if (n == 1) {
    count_1++;
    return 1; 
  } else
    return fibo(n-1) + fibo(n-2);
}
