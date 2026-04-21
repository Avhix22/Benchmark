#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define SIZE 1000000000LL // 1 billion integers
int main() {
    clock_t start, end;
    int *arr = (int*) malloc(SIZE * sizeof(int));

    if (!arr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print benchmark description
    printf("Benchmark 3:\n");
    printf("Memory benchmark\n");
    printf("Which includes reading from, and writing to array, 4 bytes each time\n");

    start = clock();

    // Writing to array
    for (long long i = 0; i < SIZE; i++) {
        arr[i] = i;
    }

    // Reading from array
    for (long long i = 0; i < SIZE; i++) {
        volatile int temp = arr[i];
    }

    end = clock();
    double execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution Time: %.4f seconds\n", execution_time);

    free(arr);
    return 0;
}