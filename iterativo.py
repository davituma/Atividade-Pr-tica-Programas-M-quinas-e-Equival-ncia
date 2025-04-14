def soma_iterativa(n):
    soma = 0
    for i in range(1, n + 1):
        soma += i
    return soma

print("Soma =", soma_iterativa(5))
