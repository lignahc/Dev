#include <stdio.h>
#include <ctype.h>

int main()
{
	int i, j, count=0;
	unsigned char chess[8][8], c;
	
	for(i=0;i<8;i++)
		for(j=0;j<8;j++) {
			while(isspace(c=getchar()))	;
			chess[i][j]=c;			
			if (chess[i][j]=='F'&&((!(j&01)&&!(i&01))||((i&01)&&(j&01))))
				count++;
		}
	printf("%d", count);
	return 0;
}
