#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXINPUT 100

typedef int cmp(const void *p, const void *q);

int qsort_cmp(int *, int *);     /* qsort비교함수 */
int L_sum(int);                  /* L 피라미드 구하는 함수 */
int H_sum(int);                  /* H 피라미드 구하는 함수 */
int is_L(int);                   /* L 피라미드인지 판단 */
int is_H(int);                   /* H 피라미드인지 판단 */
int *add_prmd_case(int);         /* 배열만들어서 후보피라미드 입력함수 */
int get_num(char *);             /* 숫자입력받는 함수 */
void get_composition(int, int *);/* 짝 찾기 힘수 */
int count_prmd(int);             /* 후보 피라미드 개수 세는 함수 */

int cases;
char T[MAXINPUT];
int input_count;

/*================================================================*/

/*================================================================*/

int main()
{
  int *reserve;
  
  while ((get_num(T) != EOF)) {
    if (!atoi(T))
      break;
    else {
      input_count++;
      cases = atoi(T);
      reserve = add_prmd_case(cases); /*reserves는 cases의 후보집합*/
    }
    get_composition(cases, reserve);
    free(reserve);
  }
  return 0;
}
/*=================================================================*/

/*=================================================================*/
void get_composition(int n, int *rsrv)
{/*R[]값이 -1-1-1-1이면 impossible, -1은 무시하는 값, 
   R의 각 자리는 reserve배열의 자리를 나타냄*/
  int R[4] = { -1, -1, -1, -1 };
  int i, j, k, l, end = count_prmd(n) + 4;
  
  for (i = 0; i < end; i++) {
    if (*(rsrv) == n) {
      R[0] = 0;
      break;
    }
    for (j = i + 1; j < end; j++) {
      for (k = j + 1; k < end; k++){
        for (l = k + 1; l < end; l++) {
          if (n == (*(rsrv + i) + *(rsrv + j) + *(rsrv + k) + *(rsrv + l))) {
            R[0] = i;
            R[1] = (*(rsrv + j) == 0) ? -1 : j;
            R[2] = (*(rsrv + k) == 0) ? -1 : k;
            R[3] = (*(rsrv + l) == 0) ? -1 : l;
            goto BREAK;
          }
        }
      }
    }                   
  }
BREAK:
  
  if ((R[0] == 0) && (R[1] == -1) && (R[2] == -1) && (R[3] == -1)) {
    printf("Case %d: %d%c\n", 
        input_count, 
        is_H(*(rsrv + R[0])) ? is_H(*(rsrv + R[0])) : is_L(*(rsrv + R[0])), 
        (is_H(*(rsrv + R[0])) ? 'H' : 'L'));
  }
  else if ((R[0] == -1) && (R[1] == -1) && (R[2] == -1) && (R[3] == -1)) {
    printf("Case %d: impossible\n", input_count);
  }
  else {
    printf("Case %d: ", input_count);
    i = 0;
    while (i < 4) {
      switch (R[i]) {
        case -1:
          i++;
          break;
        default:
          printf("%d%c ",
              is_H(*(rsrv + R[i])) ? is_H(*(rsrv + R[i])) : is_L(*(rsrv + R[i])),
              (is_H(*(rsrv + R[i])) ? 'H' : 'L'));
          i++;
          break;
      }
    }
    printf("\n");
  }
}

int count_prmd(int n) /*n보다 작은 모든 피라미드갯수 세기 */
{
  int i, count = 0;
  for (i = 1; i <= n; i++) {
    if (is_H(i))
      count++;
    if (is_L(i))
      count++;
  }
  return count;
}

int *add_prmd_case(int n_arr) /*배열에 후보 수 추가, 구성요소 계산을 위해 맨 끝에 0 4개 추가*/
{
  int i = 0, j = 2, k, boundcheck = 0;
  int *arr = (int *)malloc((count_prmd(n_arr) + 4)*sizeof(int));
  
  while ((boundcheck = H_sum(j++)) <= n_arr) {
    *(arr + i++) = boundcheck;
  }
  
  j = 3;
  boundcheck = 0;
  while ((boundcheck = L_sum(j++)) <= n_arr) {
    *(arr + i++) = boundcheck;
  }
  
  k = i;
  *(arr + k) = *(arr + k + 1) = *(arr + k + 2) = *(arr + k + 3) = 0;
  qsort(arr, count_prmd(n_arr), sizeof *arr, (cmp *)qsort_cmp);
  return arr;
}

int is_L(int n) /*L이면 그 밑의 갯수를 리턴, 아님 0*/
{
  int i = 0, sum = 0;

  if (n == 1 || n == 0)
    return 0;
  while (sum < n) {
    sum += i*i;
    i += 2;
    if (sum == n && sum != 4) {
      return i - 2;
    }
  }
  
  i = 1, sum = 0;
  while (sum < n) {
    sum += i*i;
    i += 2;
    if (sum == n) {
      return i - 2;
    }
  }
  return 0;
}

int is_H(int n)/*H이면 그 밑의 갯수를 리턴, 아니면 0*/
{
  int i = 0, sum = 0;
  
  if (n == 0 || n == 1)
    return 0;
  while (sum < n) {
    sum += i*i;
    i++;
    if (sum == n) {
      return i - 1;
    }
  }
  return 0;
}

int L_sum(int n)
{
  int i, sum = 0;
  
  if (n & 01) /*n이 홀수라면*/
    for (i = 1; i <= n; i += 2)
      sum += i*i;
  else
    for (i = 2; i <= n; i += 2)
      sum += i*i;
  return sum;
}

int H_sum(int n)
{
  int i, sum = 0;
  
  for (i = 1; i <= n; i++)
    sum += i*i;
  return sum;
}

int get_num(char *s)
{
  int c;
  while ((*s = c = getchar()) == ' ' || c == '\t' || c == '\n')
    ;
  *(s + 1) = '\0';
  if (!isdigit(c))
    return c;
  if (isdigit(c))
    while (isdigit(*++s = c = getchar()))
      ;
  *s = '\0';
  if (c == EOF)
    ungetc(c, 0);
  return 1;
}

int qsort_cmp(int *p, int *q)
{
  return *q - *p;
}
