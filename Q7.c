#include <stdio.h>

int main (){
  unsigned int h, m, s;
  puts("Digite Horas, Minutos e Segundos");
  scanf("%u:%u:%u", &h, &m, &s);
  s = (h*3600)+(m*60)+(s);

  printf("A quantidade de tempo em segundo é: %d",s);
  return 0;
}