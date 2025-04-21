#include <stdio.h>

int main() {
    // Parâmetros
    int times = 6, value = 2;
    int dividend = 8, divisor = 2;

    // Cálculo da multiplicação sem laços, apenas goto
    int result_mul = 0;
    int counter = 0;

mul_start:
    if (counter >= times) goto mul_end;
    result_mul += value;
    counter++;
    goto mul_start;

mul_end:
    // Cálculo da divisão sem laços, apenas goto
    int result_div = 0;

div_start:
    if (dividend < divisor) goto div_end;
    dividend -= divisor;
    result_div++;
    goto div_start;

div_end:
    // Impressão dos resultados
    printf("Multiplicação monolítica: %d * %d = %d\n", times, value, result_mul);
    printf("Divisão monolítica: %d / %d = %d\n", 8, 2, result_div);
    return 0;
}