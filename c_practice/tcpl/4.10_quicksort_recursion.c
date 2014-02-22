#include <stdio.h>

void quicksort(int v[], int left, int right);

/* 퀵소트 재귀.. 피벗 기준으로 작은거 큰거 가름 */
/* 사실 라이브러리에 qsort라는 이름으로 함수 있음 */
int main()
{
  int arr[] = {5,435,432,76,52,324,5,43,5,1,45,6,83,65,345};
  int i;
  
  for (i=0; i<15; i++)
    printf("%d ",arr[i]);
  printf("\n");
  
  quicksort(arr,0, 14);
  
  for (i=0; i<15; i++)
    printf("%d ", arr[i]);
  printf("\n");

  return 0;

}

void quicksort(int v[], int left, int right)
{
  int i, pivot;
  void swap(int v[], int i, int j);

  if (left >=right)
    return;
  swap(v, left, (left+right)/2);/* 파티션 나누고 */
  pivot = left; /* 피벗은 첫번째 원소 */

  for (i=left+1; i<=right; i++)
    if (v[i] < v[left])
      swap(v, ++pivot, i);
  swap(v, left, pivot); /* 정렬 끝나면 레프트랑 피벗 자리 바꾸기 */
  quicksort(v, left, pivot-1);
  quicksort(v, pivot+1, right);
}

void swap(int v[], int i, int j)
{
  int tmp;

  tmp = v[i];
  v[i] = v[j];
  v[j] = tmp;
}

