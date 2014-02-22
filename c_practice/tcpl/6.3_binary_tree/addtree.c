#include <stdio.h>
#include <string.h>
#include "struct.h"
struct tnode *talloc(void);
char *str_dup(char *);


struct tnode *addtree(struct tnode *p, char *w)
{
	int cond;

	if (p == NULL) {
		p = talloc();
		p->word = str_dup(w);
		p->count = 1;
		p->left = p->right = NULL;
	} else if ( (cond = strcmp(w, p->word)) == 0)
		p->count++;
	else if (cond < 0) /* w가 p->word보다 작으면 */
		p->left = addtree(p->left, w);
	else
		p->right = addtree(p->right, w);

	return p;
}
