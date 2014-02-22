#include <stdio.h>
#define MAXWORD 50

/* K&R 예제 1-13 입력된 단어의 길이에 대한 히스토그램*/
int main()
{
  int c;
  int countword=0;
  int numword[MAXWORD];
  int i, j;

  for (i=0; i<MAXWORD; i++) {
    numword[i]=0;
  }
  
  while ((c=getchar()) !=EOF) {
    ++countword;
    if (c ==' ' || c =='\n' || c =='\t') {
      ++numword[countword];
      countword=0;
    }
  }

  for (i=0; i<=MAXWORD; i++) {
    if (numword[i] !=0) {
      printf("%2d글자 단어 : ", i-1);
      for (j=0; j<numword[i]; j++) {
        printf("*");
      }
      printf("\n");
    }
  }
  return 0;
}

