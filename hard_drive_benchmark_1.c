#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILE_SIZE 1000000000LL // 1 GB
#define CHUNK_SIZE 100          // 100 bytes per read/write

int main() {
    clock_t start, end;
    FILE *file;
    char buffer[CHUNK_SIZE];

    printf("Benchmark 4:\n");
    printf("Hard Drive benchmark 1\n");
    printf("Which includes reading from, and writing to file, 100 bytes each time\n");

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

        