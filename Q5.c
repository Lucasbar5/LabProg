#include <stdio.h>

int main(){
  float conta, total;
  
  printf("Digite o valor da conta");
  scanf("%f", &conta);

  printf("Total a ser pago: %.01f\n", conta*1.1);
  return 0;
}