Máquina de Traços Rotulada para multiply_iter(3, 2):
  (A, result=0, i=0)
→ (B, result=0, i=0)
→ (C, result=2, i=0)
→ (B, result=2, i=1)
→ (C, result=4, i=1)
→ (B, result=4, i=2)
→ (C, result=6, i=2)
→ (B, result=6, i=3)
→ (D, result=6, i=3)

Máquina de Traços Rotulada para multiply_rec(3, 2):
  (E, value=2, times=3)
→ (F, value=2, times=3)
→ (E, value=2, times=2)
→ (F, value=2, times=2)
→ (E, value=2, times=1)
→ (F, value=2, times=1)
→ (E, value=2, times=0)
→ (G, res=0)
→ (H, res=2)
→ (H, res=4)
→ (H, res=6)

Rótulos usados para as ações:
A: Inicializa result = 0 e i = 0 (versão iterativa);
B: Verifica condição do laço i < times (versão iterativa);
C: Executa result += value (versão iterativa);
D: Retorna result final (versão iterativa);
E: Verifica se times == 0 (caso base recursivo);
F: Chama multiply_rec(times - 1, value) (passo recursivo);
G: Retorna 0 (caso base recursivo);
H: Soma previous + value e retorna (passo de volta da recursão).

Mapeamento de Traços (Recursiva ↔ Iterativa):
H (times = 0 → retorna 0)        | A (result = 0, i = 0)       | Ambos iniciam com valor base 0];
H (0 + 2 = 2)                    | C (result += value → 2)     | Primeiro passo de acumulação de valor];
H (2 + 2 = 4)                    | C (result += value → 4)     | Segundo passo de acumulação de valor];
H (4 + 2 = 6)                    | C (result += value → 6)     | Terceiro passo de acumulação de valor];
—                                | D (retorna 6)               | Resultado final em ambas é 6].

Conclusão:

Ambas computam a mesma função: value × times];
Ambas passam pelos mesmos valores intermediários: [0, 2, 4, 6]];
Mesmo resultado final: 6];
A diferença está na estrutura: recursiva usa chamadas empilhadas, iterativa usa laço];
Portanto, as duas versões são fortemente equivalentes].

multiply_iter(2,3) = 6 ⇔ multiply_rec(2,3) = 6

Exemplo de não equivalencia
multiply_rec(2,3)
(1, value=2, times=3)
→ (2, value=2, times=3)
→ (1, value=2, times=2)
→ (2, value=2, times=2)
→ (1, value=2, times=1)
→ (2, value=2, times=1)
→ (1, value=2, times=0)
→ (5, value=2, times=0)
→ (3, res=0, value=2)
→ (4, res=2)
→ (3, res=2, value=2)
→ (4, res=4)
→ (3, res=4, value=2)
→ (4, res=6)

div_rec(2,3)
  (1, a=2, b=3)  
→ (2, a=2, b=3)  
→ (5, retorno=0)  

As sequências de configurações são diferentes;
Os valores finais (6 vs. 0) são diferentes;
Portanto, não há equivalência forte entre os programas multiply_rec e divide_rec.
