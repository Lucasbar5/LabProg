#include <stdio.h>

int main (){
    float diametro, circuferencia, pi = 3.14159;
    int raio;


    puts("Digite o valor do raio do circulo em cm");
    scanf("%d", &raio);

    diametro = 2*raio;
    circuferencia = diametro*pi;

    printf("Raio: %d\nDiametro: %f\nCircuferencia: %f\n", raio, diametro, circuferencia);
    return 0;
}