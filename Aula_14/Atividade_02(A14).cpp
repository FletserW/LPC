#include <stdio.h>

//======= Área de protótipos ======= //
int maior(int num[]);
int menor(int num[]);

//======= Função Principal ======= //
int main(){
    // Variables:
    int num[3], cont, menor_idade, maior_idade;
    
    // Commands:
    printf("Informe as 3 idades:\n");
    for(cont = 0; cont < 3; cont++){
        printf("Idade %d: ", cont+1);
        scanf("%d", &num[cont]);
    }
    
    maior_idade = maior(num);
    menor_idade = menor(num);
    
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Maior idade: %d\n", maior_idade);
    printf("Menor idade: %d\n", menor_idade);
}

//======= Corpo das Funções ======= //
int menor(int num[]){
    int cont, menor = num[0];
    for(cont = 1; cont < 3; cont++){
        if(num[cont] < menor){
            menor = num[cont];
        }
    }
    return menor;
}

int maior(int num[]){
    int cont, maior = num[0];
    for(cont = 1; cont < 3; cont++){
        if(num[cont] > maior){
            maior = num[cont];
        }
    }
    return maior;
}
