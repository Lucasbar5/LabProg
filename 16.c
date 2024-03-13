#include <stdio.h>

int main () {
    float valor_bruto, valor_liquido, valor_hora, inss;
    int horas_trabalhadas;
    

    puts("Digite o valor da hora do professor: ");
    scanf("%f", &valor_hora);

    puts("Digite as horas trabalhadas nesse mes: ");
    scanf("%d", &horas_trabalhadas);

    puts("Percentual do INSS em decimal: (Ex:0.20)");
    scanf("%f", &inss);

    valor_bruto = valor_hora*horas_trabalhadas;
    valor_liquido = valor_bruto-(valor_bruto*inss);

    printf("Valor bruto: %.2f\nValor liquido: %.2f\n", valor_bruto, valor_liquido);

    return 0;
}