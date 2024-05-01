#include <stdio.h>

int main() {
    float m, h;
    float IMC;

    printf("Informe a massa do sujeito em gramas: ");
    scanf("%f", &m);

    printf("Informe a altura do sujeito em centímetros: ");
    scanf("%f", &h);

    IMC = (m/1000) / ((h/100) * (h/100));

    printf("O IMC do sujeito é %.2f\n", IMC);

    if (IMC < 16) {
        printf("O sujeito tem subpeso severo");

    } else if (IMC >= 16 && IMC < 20) {
        printf("O sujeito tem subpeso");

    } else if (IMC >= 20 && IMC < 25) {
        printf("O sujeito tem peso normal");

    } else if (IMC >= 25 && IMC < 30) {
        printf("O sujeito tem sobrepeso");

    } else if (IMC >= 30 && IMC < 40) {
        printf("O sujeito está obeso");

    } else {
        printf("O sujeito tem obesidade severa");
    }

    return 0;
}
