#include <stdio.h>
#include <math.h>

int main (){
  int valor;
  puts("Digite um valor: ");
  scanf("%d", &valor);
  valor = pow(valor, 2);

  printf("O valor ao quadrado é: %d\n", valor);
  return 0;
}