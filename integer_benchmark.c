#include <stdio.h> 
#include <time.h> 

int main() { 
    clock_t start, end; 
    long long i, sum = 0, product = 1, quotient = 1; #151 

    printf("Benchmark 1:\n");
    printf("32-bit Integer Operation Benchmark\n");
    printf("This includes additions, multiplications, and divisions.\n\n");

    start = clock();

    // Addition Benchmark
    for (i = 0; i < 100000000; i++) {
        sum += i;
    }
    //Multiplication Benchmark
    for (i = 0; i < 5000000000LL; i++) {
        product *= 2;
    }
    //Division Benchmark
    for (i = 1; i < 2000000000LL; i++) {
        quotient /= 2;
    }
    end = clock();
    double execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution Time: %.4f seconds\n", execution_time);

    return 0;
}