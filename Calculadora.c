#include <stdio.h>

int main() {
    int escolha;
    float numb, numb2, resultado;
    int continua = 1;

    while (continua) {
        printf("Calculadora       \n");
        printf("1 - Soma          \n");
        printf("2 - Subtracao     \n");
        printf("3 - Multiplicacao \n");
        printf("4 - Divisao       \n");
        printf("5 - Sair          \n");     
        
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        if (escolha == 5 || escolha > 5) {
            printf("Fechando programa\n");
            break;
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &numb);
        printf("Digite o segundo numero: ");
        scanf("%f", &numb2);

        if (escolha == 1) {
            resultado = numb + numb2;
            printf("O resultado e: %.2f\n", resultado);
        } else if (escolha == 2) {
            resultado = numb - numb2;
            printf("O resultado e:: %.2f\n", resultado);
        } else if (escolha == 3) {
            resultado = numb * numb2;
            printf("O resultado e: %.2f\n", resultado);
        } else if (escolha == 4) {
            if (numb2 != 0) {
                resultado = numb / numb2;
                printf("O resultado e: %.2f\n", resultado);
            } else {
                printf("Voce nao pode dividir um numero por zero\n");
            }
        } else {
            printf("Tente novamente\n");
        }

        printf("\n Quer continuar (1-Sim, 0-Nao): ");
        scanf("%d", &continua);
        printf("\n");
    }

    return 0;
}

