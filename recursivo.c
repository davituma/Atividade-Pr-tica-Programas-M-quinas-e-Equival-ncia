#include <stdio.h>

int multiply_rec(int times, int value) {
    if (times == 0) {
        return 0;
    }
    int previous = multiply_rec(times - 1, value);
    return previous + value;
}

int divide_rec(int dividend, int divisor) {
    if (dividend < divisor) {
        return 0;
    }
    return 1 + divide_rec(dividend - divisor, divisor);
}

int main() {
    int times = 6, value = 2;
    int dividend = 8, divisor = 2;

    int result_mul = multiply_rec(times, value);
    int result_div = divide_rec(dividend, divisor);

    printf("Multiplicação recursiva: %d * %d = %d\n", times, value, result_mul);
    printf("Divisão recursiva: %d / %d = %d\n", dividend, divisor, result_div);
    return 0;
}