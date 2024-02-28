#include <stdio.h>

int main (){
  int x = 0;
  x = 6/2*3;
  printf("O resultado é %d\n", x);
  // 7+((3*6)-1;
  // Multiplicação e Divisão -> Soma e subtração (Prioridade da Esquerda para Direita)

  x = 2%2+2*2-2/2;
  printf("O resultado é %d\n", x);
  // (2%2)+(2*2)-(2/2);
  // Resto, Multiplicação e Divisão --> Soma e Subtração ((Prioridade da Esquerda para Direita))

  x = (3*9*(3+(9*3/(3))));
  printf("O resultado é %d\n", x);
  // Prioridade de operação é () do menor para o maior

  return 0;
}