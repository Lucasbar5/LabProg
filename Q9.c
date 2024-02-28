#include <stdio.h>

int main (){
  int x;
  puts("Digite um numero: ");
  scanf("%d", &x);

  printf("Sucessor: %d\nAntecessor: %d\n", x+1, x-1);
  
  return 0;
}