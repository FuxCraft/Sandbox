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

#define ARR_SIZE 10

void arr_define(char arr[ARR_SIZE][ARR_SIZE])
{
    for (int i = 0; i < ARR_SIZE; i++)
    {
        for (int j = 0; j < ARR_SIZE; j++)
        {
            arr[i][j] = 'O';
        }
    }
}

    int main()
    {
        char arr_grid[ARR_SIZE][ARR_SIZE];

        for (int i = 0; i < ARR_SIZE; i++)
        {
            for (int j = 0; j < ARR_SIZE; j++)
            {
                arr_grid[i][j] = 'O';
            }
        }
        for (int k = 0; k < ARR_SIZE; k++)
        {

            for (int a = 0; a < ARR_SIZE; a++)
            {
                for (int b = 0; b < ARR_SIZE; b++)
                {
                    arr_grid[a][b] = 'O';
                }
            }
            arr_grid[k][1] = 'X';
            arr_grid[k][2] = 'X';
            arr_grid[k][3] = 'X';

            for (int i = 0; i < ARR_SIZE; i++)
            {
                for (int j = 0; j < ARR_SIZE; j++)
                {
                    printf("%c", arr_grid[i][j]);
                    printf(" ");
                }
                printf("\n");
            }
            printf("\n");
            sleep(1);
        }
    }