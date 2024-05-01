#include <stdio.h>

int main() {
    char resposta;
    float nota, media = 0;
    int frequencia, alunosA = 0, alunoNota10 = 0, totalAlunos = 0;

    do {
        printf("Digite a nota final e frequencia do aluno %d: ", totalAlunos + 1);
        scanf("%f %d", &nota, &frequencia);

        if (nota >= 0 && nota <= 10 && frequencia >= 0 && frequencia <= 100) {
            totalAlunos++;
            media += nota;

            if (nota >= 9 && frequencia >= 75) {
                alunosA++;
            }

            if (nota == 10) {
                alunoNota10 = 1;
            }
        } else {
            continue;
        }

        printf("Voce quer digitar a nota final e frequencia de outro aluno? (S/N) ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    if (totalAlunos > 0) {
        media /= totalAlunos;

        printf("A media das notas finais da turma foi: %.2f\n", media);
        printf("O numero de alunos com conceito 'A' foi: %d\n", alunosA);

        if (alunoNota10) {
            printf("Ao menos um aluno teve nota 10!\n");
        } else {
            printf("Nenhum aluno teve nota 10.\n");
        }
    } else {
        printf("Nenhum aluno cadastrado.\n");
    }

    return 0;
}
