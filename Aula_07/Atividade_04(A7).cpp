#include<stdio.h>

int main() {
    //Variables:
    int valor, i = 1;
    //Commands:
    printf("Digite um número: ");
    scanf("%d", &valor);
    printf(" Tabuada do %d:\n", valor);
    while (i <= 10) {
        printf("%d x %d = %d\n", valor, i, valor * i);
        i++;
    }
}