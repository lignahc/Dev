#include <stdio.h>

int main()
{
	int a[9], sum=0, i, j, temp;
	
	for(i=0 ; i<9 ; scanf("%d", &a[i]), sum+=a[i++]);
	
	for(i=0 ; i<9 ; i++)
		for(j=i+1 ; j<9 ; j++) {
			if(a[i]+a[j]==sum-100)
				a[i]=a[j]=0;
			}
			
	for(i=0 ; i<9 ; i++)
		for(j=i+1 ; j<9 ; j++) {
			if(a[i]>a[j]) {
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
			}
		}
	
	for(i=2 ; i<9 ; i++)
		printf("%d\n", a[i]);
	
	return 0;
}
