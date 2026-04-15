memory_benchmark.c

#include <stdio.h>

above are my code. i created a file in my friends laptop what should i do now 
#include <stdlib.h>
#include <time.h>

#define SIZE 5000000000LL

int main() {
    clock_t start, end;
    int *arr = (int*) malloc(SIZE * sizeof(int));