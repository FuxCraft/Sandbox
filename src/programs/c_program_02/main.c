#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10

int main(int argc, char **argv) {
  
  int arr[ARR_SIZE];

  srand(time(0));

  for(int i = 0; i < ARR_SIZE; i++){
    arr[i] = rand() % 1000;
  }

  printf("Sorted Numbers: \n");

  for(int j = 0; j < ARR_SIZE; j++){
  for(int i = 0; i < ARR_SIZE - 1; i++){
    int temp = 0;
    if (arr[i] > arr[i + 1]){
      temp = arr[i];
      arr[i] = arr[i + 1];
      arr[i + 1] = temp;
    }
  }
}

for(int i = 0; i < ARR_SIZE; i++){
  printf("%d\n", arr[i]);
}


  

  return 0;
}
