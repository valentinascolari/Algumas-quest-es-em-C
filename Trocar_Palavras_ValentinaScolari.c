#include <stdio.h>
#include <string.h>
#define MAX 250

void substituirSubstring(char *string, char *substring1, char *substring2) {
    char *ocorrencia = strstr(string, substring1);

    while (ocorrencia != NULL) {
        strncpy(ocorrencia, substring2, strlen(substring2));
        ocorrencia = strstr(ocorrencia + strlen(substring2), substring1);
}}
int main() {

    char stringOriginal[MAX];
    char substring1[MAX];
    char substring2[MAX];

    printf("Digite uma string: ");
    fgets(stringOriginal, MAX, stdin);

    stringOriginal[strcspn(stringOriginal, "\n")] = '\0';

    printf("Digite a primeira substring: ");
    fgets(substring1, MAX, stdin);

    printf("Digite a segunda substring: ");
    fgets(substring2, MAX, stdin);

    substring1[strcspn(substring1, "\n")] = '\0';
    substring2[strcspn(substring2, "\n")] = '\0';

    if (strlen(substring1) != strlen(substring2)) {
        printf("As substrings nao tem o mesmo tamanho.\n");
        return 1;
    }
    substituirSubstring(stringOriginal, substring1, substring2);

    printf("String resultante: %s\n", stringOriginal);

    return 0;
}

