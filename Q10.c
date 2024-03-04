#include <stdio.h>

int main (){
    int x, y, z;

    puts("Digite o comprimento da caixa");
    scanf("%d", &x);

    puts("Digite a altura da caixa");
    scanf("%d", &y);

    puts("Digite a largura da caixa");
    scanf("%d", &z);
    
    printf("A aréa da caixa é %d m³", x*y*z);
    
    return 0;
}