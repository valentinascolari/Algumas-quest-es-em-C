#include <stdio.h>

int main() {
    float valorEtanol, valorGasolinaComum, valorGasolinaAditivada, razao;

    printf("Digite o valor do etanol (R$/l): ");
    scanf("%f", &valorEtanol);

    printf("Digite o valor da gasolina comum (R$/l): ");
    scanf("%f", &valorGasolinaComum);

    printf("Digite o valor da gasolina aditivada (R$/l): ");
    scanf("%f", &valorGasolinaAditivada);

    razao = valorEtanol / valorGasolinaComum;

    if (razao < 0.70) {
        printf("Abastecer com etanol eh mais vantajoso!\n");
    } else if (razao > 0.70) {
        if (valorGasolinaComum <= valorGasolinaAditivada) {
            printf("Abastecer com gasolina comum eh mais vantajoso!\n");
        } else {
            printf("Abastecer com gasolina aditivada eh mais vantajoso!\n");
        }
    } else {
        if (valorGasolinaComum < valorGasolinaAditivada) {
            printf("Abastecer com gasolina comum eh mais vantajoso!\n");
        } else {
            printf("Abastecer com gasolina aditivada eh mais vantajoso!\n");
        }
    }

    return 0;
}












