#include <stdio.h>

int main () {
    int numero,numero2;
    puts("Digite um numero");
    scanf("%d",&numero);

    puts("Digite outro numero");
    scanf("%d",&numero2);

    numero % numero2 == 0 ? puts("Este numero é multiplo") : puts("Este numero é não multiplo");
    return 0;
}