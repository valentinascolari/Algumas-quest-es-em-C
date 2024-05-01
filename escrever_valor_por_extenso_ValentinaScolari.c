#include <stdio.h>

int main() {
    int valor;

    do {
        printf("Entre com um valor inteiro em [20, 39]: ");
        scanf("%d", &valor);
    } while (valor < 20 || valor > 39);

    printf("O valor %d por extenso eh: ", valor);

    int dezena = valor / 10;
    int unidade = valor % 10;

    switch (dezena) {
        case 2:
            printf("Vinte");
            break;
        case 3:
            printf("Trinta");
            break;
    }

    if (dezena != 0 && unidade != 0) {
        printf(" e ");
    }

    switch (unidade) {
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3:
            printf("Três");
            break;
        case 4:
            printf("Quatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Sete");
            break;
        case 8:
            printf("Oito");
            break;
        case 9:
            printf("Nove");
            break;
    }

    printf("\n");

    int soma = dezena + unidade;

    printf("A soma dos algarismos de %d eh: %d\n", valor, soma);

    return 0;
}
