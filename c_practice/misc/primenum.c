#include <stdio.h>

int main ()
{
  int i,j,k;
  int prime[1000]={2, 0,};
  int index = 1; //몇개의 소수를 찾았는지 최초 2는 입력 했으므로 1로 시작
  int check = 0; //소수인지 아닌지 판단, 0이면 소수
  for(i = 3; ;)
  {
    check = 0;
    for(j = 0 ; j < index ; j++)
    {
      if( i % prime[j] == 0 ) check++;
    }
    if( check ==0)
    {
      prime[index]=i;
      index++;
    }
    if(index == 1000) break; //소수는 1000개만 찾음
    i++;
  }
        
  for(k=0;k<1000;k++)
  {
    printf("%d ",prime[k]);
  }
}


