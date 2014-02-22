#include <stdio.h>
#include <stdlib.h>

struct coodi {
    int x1, y1, r1, x2, y2, r2;
};

int get_intxn(struct coodi *c);

int main()
{
  int how_many, i;
  struct coodi *cases;
  
  scanf("%d", &how_many);
  cases = (struct coodi *) malloc(how_many*sizeof(*cases));
  
  int judge;
  
  for (i = 0; i < how_many; i++) {
    scanf("%d %d %d %d %d %d",
        &(cases + i)->x1, &(cases + i)->y1,
        &(cases + i)->r1, &(cases + i)->x2,
        &(cases + i)->y2, &(cases + i)->r2);
  }
  for (i = 0; i<how_many; i++) {
    judge = get_intxn(cases + i);
    if (judge > 2)
      printf("-1\n");
    else
      printf("%d\n", judge);
  }
  return 0;
}

int get_intxn(struct coodi *c)
{
  int xi, yi, X, Y;
  int count = 0;
  
  for (xi = (c->x1 - c->r1); xi <= (c->x1 + c->r1); xi++)
    for (yi = (c->y1 - c->r1); yi <= (c->y1 + c->r1); yi++)
      if (((xi - c->x1)*(xi - c->x1) + (yi - c->y1)*(yi - c->y1)) == (c->r1*c->r1)) {
        X = xi;
        Y = yi;
        if (((X - c->x2)*(X - c->x2) + (Y - c->y2)*(Y - c->y2)) == (c->r2*c->r2))
          count++;
      }
  return count;
}
