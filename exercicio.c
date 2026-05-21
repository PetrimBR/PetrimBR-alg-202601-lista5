#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void inverterString(char original[], char invertida[], int n) {
    for (int i = 0; i < n; i++)
        invertida[i] = original[n - 1 - i];
    invertida[n] = '\0'; 
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    char original[100], invertida[100];

    printf("Digite uma palavra: ");
    scanf("%s", original);

    int n = strlen(original);
    inverterString(original, invertida, n);

    printf("Invertido: %s\n\n", invertida);

    system("pause");
    return 0;
}
