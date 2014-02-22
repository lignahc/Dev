#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

struct tnode *talloc(void)
{
	return (struct tnode *) malloc(sizeof(struct tnode));
}

char *str_dup(char *s)
{
	char *p;

	p = (char *) malloc(strlen(s)+1); /* +1은 '\0'자리 */
	if (p != NULL)
		strcpy(p, s);

	return p;
}
