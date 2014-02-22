#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node *next;
	struct _node *prev;
} Node;

int main(int argc, char *argv[])
{
	int N, d, k, c;
	Node *head = NULL;
	Node *tail = NULL;
	Node *curr = NULL;
	Node *kcurr = NULL;
	Node *search = NULL;
	Node *newnode = NULL;

	int read, max = 0, count = 0;
	int i, j, l, tmp;

	scanf("%d %d %d %d", &N, &d, &k, &c);

	//input to circular linked
	tmp = N;
	while (tmp-- > 0)
	{
		scanf("%d", &read);

		newnode = (Node*)malloc(sizeof(Node));
		newnode->data = read;
		newnode->next = newnode->prev = NULL;

		if (head == NULL)
			head = newnode;
		else
			tail->next = newnode;
		newnode->prev = tail;
		newnode->next = head;
		tail = newnode;
		head->prev = newnode;
	}
	//search
	curr = head;
	for (i = 0; i < N; i++)
	{
		count = 0;
		if (curr->data == c)
		{
			count--;
		}
		kcurr = curr;
		for (j = 0, tmp = k; j < k; j++, tmp--)
		{
			count++;
			search = kcurr;
			for (l = 0; l < k - tmp; l++)
			{
				if (search->prev->data == kcurr->data || search->prev->data == c)
				{
					count--;
					break;
				}
				search = search->prev;
			}
			kcurr = kcurr->next;
		}
		if (max < count)
			max = count;
		curr = curr->next;
	}
	printf("%d", max+1);
	return 0;
}