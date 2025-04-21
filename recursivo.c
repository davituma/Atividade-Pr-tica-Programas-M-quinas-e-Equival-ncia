#include <stdio.h>

// R(times, value): retorna times * value via soma recursiva
// Pré-condição: times, value ≥ 0
int multiply_rec(int times, int value) {
    if (times == 0) {
        return 0;
    }
    int previous = multiply_rec(times - 1, value);
    return previous + value;
}

// D(dividend, divisor): retorna dividend / divisor (divisão inteira) via subtração recursiva
// Pré-condição: dividend, divisor ≥ 1
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