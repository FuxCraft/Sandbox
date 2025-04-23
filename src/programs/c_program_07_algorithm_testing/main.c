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

#define ARR_SIZE 3

// 2d int grid counter setup (need counter variable set to 0)
void define_2d_int_grid(int32_t int_arr_2d_grid[ARR_SIZE][ARR_SIZE], size_t counter)
{
    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        for (size_t j = 0; j < ARR_SIZE; j++)
        {
            counter++;
            int_arr_2d_grid[i][j] = counter;
        }
    }
}

// 2d int grid print
void print_2d_int_grid(int32_t int_arr_2d_grid[ARR_SIZE][ARR_SIZE])
{
    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        for (size_t j = 0; j < ARR_SIZE; j++)
        {
            printf(" %d ", int_arr_2d_grid[i][j]);
        }
        printf("\n");
    }
}

// 2d int grid print(only one row)
void print_2d_int_grid_row(int32_t int_arr_2d_grid[ARR_SIZE][ARR_SIZE], size_t row)
{
    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        printf(" %d ", int_arr_2d_grid[row][i]);
    }
}

int main()
{
    char char_arr_2d_grid[ARR_SIZE][ARR_SIZE];
    int32_t int_arr_2d_grid[ARR_SIZE][ARR_SIZE];
    char grid_letter = ' ';
    size_t counter = 0;

    define_2d_int_grid(int_arr_2d_grid, counter);
    for (size_t x = 0; x < ARR_SIZE; x++)
    {
        for (size_t i = 0; i < ARR_SIZE; i++)
        {
            for (size_t j = 0; j < ARR_SIZE; j++)
            {
                print_2d_int_grid_row(int_arr_2d_grid, i);
                if (j != ARR_SIZE - 1)
                {
                    printf(" | ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}