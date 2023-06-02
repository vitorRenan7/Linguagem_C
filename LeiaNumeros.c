#include <stdio.h>

int main() {
    int numb;

    printf("Digite 10 números:\n");

    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numb);

        if (numb % 2 != 0) {
            printf("%d é ímpar.\n", numb);
        }
    }

    return 0;
}
