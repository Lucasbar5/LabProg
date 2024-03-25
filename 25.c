//Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos
//h ́a neste tempo.

#include <stdio.h>

int main () {
  int h = 0, m = 0, s = 0, tempo;

  puts("Digite o tempo total em segundos: ");
  scanf("%d", &tempo);

  while (tempo!=0) {
    if (tempo>=3600) {
      tempo -= 3600;
      h += 1;
    } else if (tempo >= 60) {
      tempo -= 60;
      m += 1;
    } else {
      s = tempo;
      tempo -= s;
    }
    
  }

  printf("O tempo total é %d Horas:%d Minutos:%d Segundos\n", h, m, s);
  return 0;
}