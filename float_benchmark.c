#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double i, sum = 0.0, product = 1.0, quotient = 1.0;

    printf("Benchmark 2:\n");
    printf("64-bit Floating point operation benchmark\n");
    printf("Which includes additions, multiplication, and division.\n");

    // Initialize buffer
    for (int i = 0; i < CHUNK_SIZE; i++) {
        buffer[i] = 'A';
    }

    start = clock();

    // Writing to a file
    file = fopen("test_file_1.dat", "wb");
    if (!file) {
        printf("Error: Unable to create file.\n");
        return 1;
        }
    for (long long i = 0; i < FILE_SIZE / CHUNK_SIZE; i++) {
        fwrite(buffer, sizeof(char), CHUNK_SIZE, file);
    }
    fclose(file);

    // Reading from a file
    file = fopen("test_file_1.dat", "rb");
    if (!file) {
        printf("Error: Unable to open file for reading.\n");
        return 1;
        }
    while (fread(buffer, sizeof(char), CHUNK_SIZE, file));
    fclose(file);

    end = clock();

    double execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution Time: %.6f seconds\n", execution_time);

    return 0;
}

hard_drive_benchmark_2.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILE_SIZE 1000000000LL  // 1 GB
#define CHUNK_SIZE 10000        // 10,000 bytes per read/write
