hard_drive_benchmark_2.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h

#define FILE_SIZE 1000000000LL  // 1 GB
#define CHUNK_SIZE 10000        // 10,000 bytes per read/write

int main() {
    clock_t start, end;
    FILE *file;
    char buffer[CHUNK_SIZE];

    printf("Benchmark 5:\n");
    printf("Hard Drive benchmark 2\n");
    printf("Which includes reading from, and writing to file, 10000 bytes each time\n");
