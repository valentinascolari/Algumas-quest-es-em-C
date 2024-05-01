#include <stdio.h>

int main() {
    float s0, v0, a, t;

    printf("Informe a posicao inicial do movel: ");
    scanf("%f", &s0);

    printf("Informe a velocidade inicial do movel: ");
    scanf("%f", &v0);

    printf("Informe a aceleracao do movel: ");
    scanf("%f", &a);

    printf("Informe um instante de tempo: ");
    scanf("%f", &t);

    float s = s0 + (v0 * t) + ((a * t * t) / 2);
    float v = v0 + (a * t);

    printf("A posicao e a velocidade finais do movel sao: %.2f e %.2f\n", s, v);

    return 0;
}
