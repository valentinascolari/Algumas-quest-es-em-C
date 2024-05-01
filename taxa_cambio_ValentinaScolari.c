#include <stdio.h>

int main() {
    char moedaOrigem, moedaDestino;
    float montante, resultado;

    printf("Digite a moeda de origem (use R/r para real, D/d para dolar e E/e para euro): ");
    scanf(" %c", &moedaOrigem);

    printf("Digite a moeda de destino (use R/r para real, D/d para dolar e E/e para euro): ");
    scanf(" %c", &moedaDestino);

    printf("Digite um montante: ");
    scanf("%f", &montante);

    if ((moedaOrigem == 'R' || moedaOrigem == 'r') && (moedaDestino == 'D' || moedaDestino == 'd')) {
        resultado = montante * 0.19132101;
        printf("O montante corresponde a %.2f dolares!\n", resultado);

    } else if ((moedaOrigem == 'R' || moedaOrigem == 'r') && (moedaDestino == 'E' || moedaDestino == 'e')) {
        resultado = montante / 0.18119005;
        printf("O montante corresponde a %.2f euros!\n", resultado);

    } else if ((moedaOrigem == 'D' || moedaOrigem == 'd') && (moedaDestino == 'R' || moedaDestino == 'r')) {
        resultado = montante * 5.2268407311;
        printf("O montante corresponde a %.2f reais!\n", resultado);

    } else if ((moedaOrigem == 'D' || moedaOrigem == 'd') && (moedaDestino == 'E' || moedaDestino == 'e')) {
        resultado = montante * 0.94704732;
        printf("O montante corresponde a %.2f euros!\n", resultado);

    } else if ((moedaOrigem == 'E' || moedaOrigem == 'e') && (moedaDestino == 'R' || moedaDestino == 'r')) {
        resultado = montante * 5.2268174833;
        printf("O montante corresponde a %.2f reais!\n", resultado);

    } else if ((moedaOrigem == 'E' || moedaOrigem == 'e') && (moedaDestino == 'D' || moedaDestino == 'd')) {
        resultado = montante / 0.94704732;
        printf("O montante corresponde a %.2f dolares!\n", resultado);

    }
    return 0;
}
