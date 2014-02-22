#include <stdio.h>
void swap(int *ar, int a, int b)
{
	int temp;
	temp=ar[a];
	ar[a]=ar[b];
	ar[b]=temp;
}
int main()
{
	unsigned char c;
	int a[3]={1, 0, 0}, i=0;
	
	while((c=getchar())!=EOF) {
		if(c=='\n')break;
		if (c=='A')
			swap(a, 0, 1);
		if (c=='B')
			swap(a, 1, 2);
		if (c=='C')
			swap(a, 0, 2);
	}
	while(i<3) {
		if (a[i++]==1) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}
