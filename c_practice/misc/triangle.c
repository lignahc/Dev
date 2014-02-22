#include <stdio.h>

int main()
{
  int i,j,k;
  int n = 0;
  printf("몇 줄 입력 할래? : ");
  scanf("%d", &n);

  for ( i = 0; i<n; i++)
  {
    for(j=0;j<(n-1-i);j++)
    {
      printf(" ");
    }
    for(k=0; k<(2*i+1);k++)
    {
      printf("*");
    }
    printf("\n");
  }
}


