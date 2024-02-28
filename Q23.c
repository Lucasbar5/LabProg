#include <stdio.h>

int main (){
  int x;
  
  puts("Entre com um numero de tres digitos");
  scanf("%d", &x);

  int c, d, u;

  c = x/100;
  d = (x%100)/10;
  u = (d%100)%10;

  int y = u*100 + d*10 + c;
  printf("Valor Anterior: %d\n", x);
  printf("Valor processado: %d\n", y);
  return 0;
}