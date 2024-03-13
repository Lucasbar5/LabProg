#include <stdio.h>

int main () {
    int numero;
    puts("Digite um numero");
    scanf("%d",&numero);
    
    numero % 2 == 0 ? puts("Este numero é par") : puts("Este numero é impar");
    return 0;
}