#include <stdio.h>
int binarysearch(int x, int v[], int n);

/*이분탐색*/
int main()
{
  int v[10] = {1,2,3,4,5,6,7,8,9,10};
  int a = 3;
  printf("%d는 v[%d]에 있다", a, binarysearch(a, v, 10));

  return 0;
}

int binarysearch(int x, int v[], int n)
{
  int low, high, mid;

  low =0;
  high =n-1;
  while (low <= high) {
    mid = (low+high)/2;
    if (x < v[mid])
      high = mid-1;
    else if (x > v[mid])
      low = mid +1;
    else
      return mid; /* found match */
  }
  return -1; /* no match */
}

