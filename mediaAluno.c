#include <stdio.h>

int main() {
    float media;
    int frequencia;
    
    printf("Digite a media do Aluno: ");
    scanf("%f", &media);
    
    printf("Digite a frequencia do aluno: ");
    scanf("%d", &frequencia);
    
    if(media >= 6 && frequencia >= 75){
        printf("Aluno aprovado");
    }else{
        printf("Aluno reprovado");
    }
    
    return 0;
}