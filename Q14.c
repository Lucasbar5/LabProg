#include <stdio.h>

int main (){
    float c;

    puts("Digite a temperatura em Celsius");
    scanf("%f", &c);

    printf("Valor em Fahreheit: %.02f", (9*c+160)/5);
    
    return 0;
}