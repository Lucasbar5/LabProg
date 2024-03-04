#include <stdio.h>

int main (){
    int x, y;

    puts("Primeiro numero: ");
    scanf("%d", &x);

    puts("Segundo numero: ");
    scanf("%d", &y);
    
    printf("Soma: %d\nProduto: %d\nDiferença: %d\nQuoeficiente: %d\nResto: %d", x+y, x*y, x-y, x/y, x%y);


    return 0;
}