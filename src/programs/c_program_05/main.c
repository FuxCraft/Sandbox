#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 3

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
int main(int argc, char **argv) {
  
  int arr[ARR_SIZE];

  srand(time(0));

  for(int i = 0; i < ARR_SIZE; i++){
    arr[i] = rand() % 10000;
  }

for(int j = 0; j < 1;){
  for(int i = 0; i < ARR_SIZE; i++){
    printf("%d; ", arr[i]);
  }
  shuffle(arr);
  printf("\n");
  for(int i = 0; i < ARR_SIZE-1; i++){
    if(arr[i] > arr[i+1]){
      break;
    } else if(i == ARR_SIZE-1){
      j++;
    }
  }
}

for(int i = 0; i < ARR_SIZE; i++){
  printf("%d; ", arr[i]);
}
printf("\n");

printf("ARR sorted");
  return 0;
}
