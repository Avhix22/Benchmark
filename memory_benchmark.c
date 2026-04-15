memory_benchmark.c

#include <stdio.h>

above are my code. i created a file in my friends laptop what should i do now 
#include <stdlib.h>
#include <time.h>

#define SIZE 5000000000LL

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

    