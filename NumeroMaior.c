#include <stdio.h>

int main() {
    int numb, numb2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numb);

    printf("Digite o segundo número:  ");
    scanf("%d", &numb2);

    while (numb != 0 && numb2 != 0) {
        if (numb > numb2) {
            printf("o numero %d e maior.\n", numb);
        } else if (numb2 > numb) {
            printf("o numero %d e maior.\n", numb2);
        } else {
            printf("números iguais.\n");
        }

        printf("Digite o primeiro número: ");
        scanf("%d", &numb);

        printf("Digite o segundo número: ");
        scanf("%d", &numb2);
    }

    printf("Programa encerrado.\n");

    return 0;
}
