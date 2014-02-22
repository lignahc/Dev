#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char me[1000], doctor[1000];

	scanf("%s", me);
	scanf("%s", doctor);
	printf("%s", strlen(me)>=strlen(doctor)?"go":"no");
	return 0;
}
