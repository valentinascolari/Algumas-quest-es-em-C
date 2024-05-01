#include <stdio.h>
#include <math.h>
#define MAX 10

int main() {
    double resultados[MAX];
    double media = 0.0, desvioPadrao = 0.0, tolerancia;

    printf("Digite uma tolerancia maxima para a dispersao dos dados: ");
    scanf("%lf", &tolerancia);

    for (int i = 0; i < MAX; i++) {
        printf("Digite o resultado do %do experimento: ", i + 1);
        scanf("%lf", &resultados[i]);
        media += resultados[i];
    }

    media /= MAX;

    for (int i = 0; i < MAX; i++) {
        desvioPadrao += pow(resultados[i] - media, 2);
    }
    desvioPadrao = sqrt(desvioPadrao / MAX);

    if (desvioPadrao <= tolerancia) {
        printf("O desvio padrao dos resultados esta dentro da margem de tolerancia!\n");
    } else {
        printf("O desvio padrao dos resultados ultrapassou a margem de tolerancia!\n");
    }
    return 0;
}
