#include <stdio.h>

int main () {
  int x, n, mask;

  puts("Digite o valor de X:");
  scanf("%d", &x);

  puts("Digite o valor de N:");
  scanf("%d", &n);

  x = x << n;

  printf("O valor elevado a um valor N = %d", x);
  return 0;
}