#include <stdio.h>

void shellsort(int v[], int n);
/*  */
int main()
{
  int num[10];
  int i;
  for (i=0; i!=10; i++) {
    printf("%d번째 숫자를 입력 : ", i+1);
    scanf("%d", &num[i]);
  }
  shellsort(num, 10);
  
  for (i=0; i!=10; i++)
    printf("%d ", num[i]);

  return 0;
}

void shellsort(int v[], int n)
{
  int gap, i, j, temp;

  for (gap=n/2; gap>0; gap/=2) /* 코드 보면 알겠는데 짜라면 못짜겠다.. */
    for (i=gap; i<n; i++)
      for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
        temp = v[j];
        v[j] = v[j+gap];
        v[j+gap] = temp;
      }
}
