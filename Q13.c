#include <stdio.h>

int main (){
    int x, y, z;

    puts("Primeiro numero: ");
    scanf("%d", &x);

    puts("Segundo numero: ");
    scanf("%d", &y);
    
    z = x;
    x = y;
    y = z;

    printf("x: %d\ny: %d", x, y);
    return 0;
}