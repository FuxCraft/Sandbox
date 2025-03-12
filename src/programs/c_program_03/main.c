#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 5

char fill_arr(char arr[ARR_SIZE][ARR_SIZE]){
  for(int i = 0; i < ARR_SIZE; i++){
    for(int j = 0; j < ARR_SIZE; j++){
      arr[i][j] = 'X';
    }
  }
}

char print_arr(char arr[ARR_SIZE][ARR_SIZE]){
  for(int i = 0; i < ARR_SIZE; i++){
    for(int j = 0; j < ARR_SIZE; j++){
      printf("%c ", arr[i][j]);
    }
    printf("\n");
  }
}

int main(int argc, char **argv) {

  /*int place[ARR_SIZE][ARR_SIZE];
  print_arr(place);*/

  srand(time(0));

  int pos_x = 0;
  int pos_y = 0;
  int bomb_num = 0;
  int score = 0;
  char arr[ARR_SIZE][ARR_SIZE];
  fill_arr(arr);
  print_arr(arr);

  printf("how many bombs do you want?");
  scanf("%d", &bomb_num);

  char bomb_arr[ARR_SIZE][ARR_SIZE];
  fill_arr(bomb_arr);

  for(int i = 0; i < bomb_num; i ++){
  bomb_arr[rand() % ARR_SIZE][rand() % ARR_SIZE] = 'B';
  }

  while(1)
  {

  printf("put in x coords");
  scanf("%d", &pos_x);

  printf("put in y coords");
  scanf("%d", &pos_y);

  if (bomb_arr[pos_x][pos_y] != 'B'){
  arr[pos_x][pos_y] = 'A';
  print_arr(arr);
  score++;
  } else {
    arr[pos_x][pos_y] = 'B';
    print_arr(arr);
    printf("YOU HIT A BOMB AND YOUR SCORE WAS: %d\n", score);
    return 0;
  }

  }

  return 0;
}
