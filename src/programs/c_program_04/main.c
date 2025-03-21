#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 100000

int main(int argc, char **argv) {
  
  int arr[ARR_SIZE];

  srand(time(0));

  for(int i = 0; i < ARR_SIZE; i++){
    arr[i] = rand() % 10000;
  }

  printf("Sorted Numbers: \n");

  //int biggest = arr[0];

  for(int j = 0; j < ARR_SIZE; j++){
  for(int i = 0; i < ARR_SIZE - 1; i++){
    int temp = 0; 
    if(arr[j] < arr[i]){
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
}

for(int i = 0; i < ARR_SIZE; i++){
  printf("%d;", arr[i]);
}


  

  return 0;
}
