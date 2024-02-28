#include <stdio.h>

int main (){
  int x;

  printf("Digite um numero\n");
  scanf("%d", &x);
  
  
  printf("Base Decimal: %d\n", x);
  printf("Base Octal: %o\n", x);
  printf("Base Hexa: %x\n", x);
  return 0;
}