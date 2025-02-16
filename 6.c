#include <stdio.h>

int main() {
    int valor, i, menor = 9999, maior = -9999, soma = 0;
    for(i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valor);
        if(valor < menor) menor = valor;
        if(valor > maior) maior = valor;
        soma += valor;
    }
    printf("Maior: %d\nMenor: %d\nMedia: %.2f\n", maior, menor, (float)soma/10);
    return 0;
}
