#include <stdio.h>
 
int main()
{
    int i=0, n, fibo=0, prev=0, next=1;
    scanf("%d",&n);
    while(++i<n) {
        fibo=prev+next;
        prev=next;
        next=fibo;
    }
    printf("%d\n", n==1?1:n==2?1:fibo);
    return 0;
}
