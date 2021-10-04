#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int original_array[10];
    original_array[0] = 0;

    // seed the RNG
    srand(time(NULL));

    // fill the rest randomly
    int i;
    for (i = 1; i < 10; i++) {
        original_array[i] = rand();
    }

    // print out the array
    printf("The Original Array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d: %d\n", i, original_array[i]);
    }

    int new_array[10];
    int *original_ptr = original_array;
    int *new_ptr = new_array;

    // fill second new array with the reverse of
    // the original; only using pointers
    // [] way
    for (i = 0; i < 10; i++) {
        new_ptr[9-i] = original_ptr[i];
    }

    // print the new array
    printf("\nThe New Reversed Array using []:\n");
    for (i = 0; i < 10; i++) {
        printf("%d: %d\n", i, new_array[i]);
    }

    // fill second new array with the reverse of
    // the original; only using pointers
    // * way
    for (i = 0; i < 10; i++) {
        *(new_ptr + 9 - i) = *(original_ptr + i);
    }

    // print the new array
    printf("\nThe New Reversed Array using *:\n");
    for (i = 0; i < 10; i++) {
        printf("%d: %d\n", i, *(new_array + i));
    }

    return 0;
}
