#include <stdio.h>
#include "struct.h"

#define MAXWORD 100

struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);
int getword(char *, int);


int main()
{
	struct tnode *root;
	char word[MAXWORD];

	root = NULL;
	while (getword(word, MAXWORD) != EOF)
		if (isalpha(word[0]))
			root = addtree(root, word);
	treeprint(root);

	return 0;
}

void treeprint(struct tnode *p)
{
	if (p != NULL){
		treeprint(p->left);
		printf("%4d %s\n", p->count, p->word);
		treeprint(p->right);
	}
}
