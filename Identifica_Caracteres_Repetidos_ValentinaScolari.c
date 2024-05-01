#include <stdio.h>
#include <string.h>
#define MAX 25

int main() {
    char input[MAX];

    printf("Digite uma palavra somente com letras minusculas e sem acento: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    int count[MAX] = {0};
    for (int i = 0; i < strlen(input); i++) {
        count[input[i] - 'a']++;
    }
    for (int i = 0; i < MAX; i++) {
        if (count[i] > 1) {
            printf("O caractere '%c' aparece %d vezes em '%s'!\n", i + 'a', count[i], input);
     }}
    return 0;
}
