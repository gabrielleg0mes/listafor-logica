#include <stdio.h>

int main() {
    char tipo;
    float valor, totalVista = 0, totalPrazo = 0;
    int i;
    for(i = 0; i < 10; i++) {
        printf("Digite o codigo (V/P) e o valor da transacao %d: ", i+1);
        scanf(" %c %f", &tipo, &valor);
        if(tipo == 'V') totalVista += valor;
        else if(tipo == 'P') totalPrazo += valor;
    }
    printf("Total a vista: %.2f\nTotal a prazo: %.2f\nTotal geral: %.2f\n", totalVista, totalPrazo, totalVista + totalPrazo);
    return 0;
}
