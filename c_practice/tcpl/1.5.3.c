#include <stdio.h>

/*행의 개수 세기*/
main()
{
  int c, nl=0, ns=0;

  while ((c=getchar()) !=EOF) {
    if (c =='\n')
      ++nl;
    if (c ==' ')
      ns++;
  }
  printf("행의 개수는 : %d\n빈칸의 개수는 : %d\n", nl, ns);
}


