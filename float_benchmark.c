#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double i, sum = 0.0, product = 1.0, quotient = 1.0;

    printf("Benchmark 2:\n");
    printf("64-bit Floating point operation benchmark\n");
    printf("Which includes additions, multiplication, and division.\n");

    start = clock();

    // Addition Benchmark
    for (i = 0; i < 1000000000.0; i++) {
        sum += i;
    }
    // Multiplication Benchmark
    for (i = 0; i < 5000000000.0; i++) {
        product *= 2.0;
    }
    // Division Benchmark
    for (i = 1; i < 2000000000.0; i++) {
        quotient /= 2.0;
    }

    end = clock();
    double execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution Time: %.4f seconds\n", execution_time);

    return 0;
}