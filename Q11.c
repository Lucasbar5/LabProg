#include <stdio.h>

int main (){
    float cotacao, dinheiro;
    int dolar;

    puts("Cotação do dolar: ");
    scanf("%f", &cotacao);

    puts("Quanto deseja converter: ");
    scanf("%f", &dinheiro);

    dolar = dinheiro/cotacao;

    printf("Convertendo da um total de %d dolar", dolar);

    return 0;
}