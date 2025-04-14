#include <stdio.h>

int main() {
    int n, i = 1, soma = 0;
    printf("Digite um número: ");
    scanf("%d", &n);

inicio:
    if (i <= n) {
        soma += i;
        i++;
        goto inicio;
    }

    printf("Soma = %d\n", soma);
    return 0;
}
