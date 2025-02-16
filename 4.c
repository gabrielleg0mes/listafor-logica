#include <stdio.h>

int main() {
    float compra, soma = 0, menor = 9999, maior = 0;
    int i;
    for(i = 0; i < 10; i++) {
        printf("Digite o valor da compra %d: ", i+1);
        scanf("%f", &compra);
        soma += compra;
        if(compra < menor) menor = compra;
        if(compra > maior) maior = compra;
    }
    printf("Media: %.2f\nMenor: %.2f\nMaior: %.2f\nDiferenca: %.2f\n", soma/10, menor, maior, maior - menor);
    return 0;
}
