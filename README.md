A seguir maquina de traços que mostra equivalencia
Máquina de Traços Rotulada para multiply_iter(2,3)
  (1, result=0, i=0)
→ (2, result=0, i=0)
→ (3, result=0, i=0)
→ (4, result=3, i=0)
→ (2, result=3, i=1)
→ (3, result=3, i=1)
→ (4, result=6, i=1)
→ (2, result=6, i=2)
→ (5, result=6, i=2)



Máquina de Traços Rotulada para multiply_rec(2,3)
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

Equivalência Forte
Ambos os pares de funções (iterativa e recursiva) resultam nas mesmas cadeias de traços observáveis, ou seja, os mesmos valores finais são retornados:

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
