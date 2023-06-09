#include <stdio.h>

int main() {
    // Variáveis:
    int cont = 1;
    float nota, soma = 0, media, maior = 0, menor = 10;

    //Commands:
    printf("Informe a nota dos alunos de 1 a 10:\n");
    do {
        printf("Digite a nota do %dº aluno: ", cont);
        scanf("%f", &nota);
        if (nota >= 1 && nota <= 10) {
            soma += nota;
            if (nota > maior) 
                maior = nota;
            if (nota < menor) 
                menor = nota;
            cont++;
        } 
        else {
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Nota inválida. Por favor, digite uma nota entre 1 e 10.\n");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        }
    } while (cont <= 10);
    media = soma / 10;
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Soma das notas: %.2f\n", soma);
    printf("Média das notas: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
