 #include <stdio.h>

int main() {
    int numero, modulo, mask;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    mask = numero >> ((sizeof(int) * 8) - 1);
    modulo = numero ^ mask;
    modulo += 1;
    printf("O valor absoluto de %d é %d\n", numero, modulo);

    return 0;
}