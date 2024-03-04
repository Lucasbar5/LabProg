#include <stdio.h>
int main () {
    float total, diaria = 50.25;
    int dias;

    puts("Digite a quantidade de dias trabalhados");
    scanf("%d", &dias);

    if (dias<=10){
        total = (dias*diaria)*0.9;
    }else if(dias <= 20){
        total = ((dias*diaria)*0.9)*1.2;
    }else{
        total = ((dias*diaria)*0.9)*1.3;
    }
    printf("Valor Total: %.02f", total);
    return 0;
}