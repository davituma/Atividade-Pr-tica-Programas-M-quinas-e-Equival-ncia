#include <stdio.h>

int main() {
    int times = 6, value = 2;
    int dividend = 8, divisor = 2;

    int result_mul = 0;
    int counter = 0;

mul_start:
    if (counter >= times) goto mul_end;
    result_mul += value;
    counter++;
    goto mul_start;

mul_end:
    int result_div = 0;

div_start:
    if (dividend < divisor) goto div_end;
    dividend -= divisor;
    result_div++;
    goto div_start;

div_end:
    printf("Multiplicação monolítica: %d * %d = %d\n", times, value, result_mul);
    printf("Divisão monolítica: %d / %d = %d\n", 8, 2, result_div);
    return 0;
}