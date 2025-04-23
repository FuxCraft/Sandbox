#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10

void shuffle(int *array)
{
  if (ARR_SIZE > 1)
  {
    size_t i;
    for (i = 0; i < ARR_SIZE - 1; i++)
    {
      size_t j = i + rand() / (RAND_MAX / (ARR_SIZE - i) + 1);
      int t = array[j];
      array[j] = array[i];
      array[i] = t;
    }
  }
}

int arraySortedOrNot(int arr[], int n)
{
  if (n == 0 || n == 1)
    return 1;

  for (int i = 1; i < n; i++)
  {
    if (arr[i - 1] > arr[i])
      return 0;
  }
  return 1;
}

int main(int argc, char **argv)
{

  int arr[ARR_SIZE];

  srand(time(0));

  for (int i = 0; i < ARR_SIZE; i++)
  {
    arr[i] = rand() % 10;
  }

  for (int j = 0; j < 1; j++)
  {
    for (int k = 0; k < ARR_SIZE; k++)
    {
      printf("%d; ", arr[k]);
    }
    shuffle(arr);
    printf("\n");
    if (arraySortedOrNot(arr, ARR_SIZE))
    {
      for (int i = 0; i < ARR_SIZE; i++)
      {
        printf("%d; ", arr[i]);
      }
      printf("sorted\n");
      return 0;
    }
    else
    {
      j--;
    }
  }

  for (int i = 0; i < ARR_SIZE; i++)
  {
    printf("%d; ", arr[i]);
  }
  printf("\n");

  printf("ARR sorted");
  return 0;
}
