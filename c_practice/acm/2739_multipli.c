#include <stdio.h>
 
int main()
{
    int n, i=0;
     
    for(scanf("%d", &n) ; i<9 ; ++i, printf("%d * %d = %d\n", n, i, n*i));
    return 0;
}
