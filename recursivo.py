def soma_recursiva(n):
    if n == 0:
        return 0
    return n + soma_recursiva(n - 1)

print("Soma =", soma_recursiva(5))
