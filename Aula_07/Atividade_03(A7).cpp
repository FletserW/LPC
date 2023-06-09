#include<stdio.h>

int main() {
    //Variables:
    int valor, i = 1;
    //Commands:
    printf("Digite um número: ");
    scanf("%d", &valor);
    printf("Números pares:\n");
    while (i <= valor) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }
    i = 1;
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Números ímpares:\n");
    while (i <= valor) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
        i++;
    }
}