#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("MAIOR DE IDADE\n");
    } else {
        printf("MENOR DE IDADE\n");
    }

    return 0;
}