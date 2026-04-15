hard_drive_benchmark_2.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h

#define FILE_SIZE 1000000000LL  // 1 GB
#define CHUNK_SIZE 10000        // 10,000 bytes per read/write