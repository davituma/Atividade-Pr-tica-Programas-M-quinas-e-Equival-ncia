#include <stdio.h>

int multiply_iter(int times, int value) {
    int result = 0;
    for (int i = 0; i < times; i++) {
        result += value;
    }
    return result;
}

int divide_iter(int dividend, int divisor) {
    int result = 0;
    while (dividend >= divisor) {
        dividend -= divisor;
        result++;
    }
    return result;
}

int main() {
    int times = 6, value = 2;
    int dividend = 8, divisor = 2;

    printf("Multiplicação iterativa: %d * %d = %d\n",
           times, value, multiply_iter(times, value));
    printf("Divisão iterativa: %d / %d = %d\n",
           dividend, divisor, divide_iter(dividend, divisor));
    return 0;
}