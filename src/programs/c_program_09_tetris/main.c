// --------------------------------------------------------------------------------
// Author: Fuchs Simon
// Description: Lotto Number Generator
// --------------------------------------------------------------------------------
// History:
//
// <date YYYY/MM/DD>: <user> -- <description of change>
// ..
// --------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>
#include <unistd.h>

#define ARR_SIZE 9
#define BLOCK_SIZE 3

void arr_define(char arr[][ARR_SIZE])
{
    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        for (size_t j = 0; j < ARR_SIZE; j++)
        {
            if(arr[i+1][j+1] != 'X'){
                arr[i][j] = 'O';
            }
        }
    }
}

void arr_print(char arr[][ARR_SIZE]){
    for (size_t i = 0; i < ARR_SIZE; i++)
            {
                for (size_t j = 0; j < ARR_SIZE; j++)
                {
                    printf("%c", arr[i][j]);
                    printf(" ");
                }
                printf("\n");
            }
}

    int main()
    {
        char arr_grid[ARR_SIZE][ARR_SIZE];

        for (size_t j = 0; j < 1000; j++){
        for (size_t k = 0; k < ARR_SIZE && arr_grid[k+1][3] != 'X'; k++)
        {

            arr_define(arr_grid);
            for (size_t i = 3; i < BLOCK_SIZE*2; i++){
            arr_grid[k][i] = 'X';
            }
            
            arr_print(arr_grid);
            
            printf("\n");
            sleep(1);
        }
        }
    }