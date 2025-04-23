#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int count = 0;
    bool exists;
    
    // Seed the random number generator
    srand(time(NULL));

    while (count < SIZE) {
        int num = rand() % 10 + 1; // Random number between 1 and 100
        exists = false;

        // Check for duplicates
        for (int i = 0; i < count; i++) {
            if (numbers[i] == num) {
                exists = true;
                break;
            }
        }

        if (!exists) {
            numbers[count] = num;
            count++;
        }
    }

    // Print the array
    printf("Random unique numbers:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
