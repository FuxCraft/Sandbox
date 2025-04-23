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

#define ARR_SIZE 6

int check_double(int arr[ARR_SIZE])
{
    for (int i = 0; i < ARR_SIZE; i++)
    {
        for (int j = 0; j < ARR_SIZE; j++)
        {
            if (arr[i] == arr[j])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    srand(time(0));

    int arr[ARR_SIZE];
    int num_of_tips = 0;

    printf("How many Lotto Numbers do you want?\n");
    scanf("%d", &num_of_tips);

    for (int j = 0; j < num_of_tips; j++)
    {
        for (int i = 0; i < ARR_SIZE; i++)
        {
            arr[i] = rand() % 49;
        }

        if (check_double(arr))
        {
            for (int i = 0; i < ARR_SIZE; i++)
            {
                printf("%d; ", arr[i]);
            }
        }
        else
        {
            j--;
        }

        printf("\n");
    }

    return 0;
}