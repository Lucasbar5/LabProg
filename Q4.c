#include <stdio.h>

int main (){
  int x;
  printf("Digite um numero real");
  scanf("%d", &x);

  printf("Seu triplo: %d\n Seu Quadrado: %d\n Seu meio: %f\n", x*3, x*x, (float) x/2);
  return 0;
}