#include <stdio.h>

int main() {
    int idade, i, mais50 = 0, menos60 = 0, altura1a2 = 0;
    float altura, peso;
    for(i = 0; i < 5; i++) {
        printf("Digite idade, altura e peso da pessoa %d: ", i+1);
        scanf("%d %f %f", &idade, &altura, &peso);
        if(idade > 50) mais50++;
        if(peso < 60) menos60++;
        if(altura >= 1 && altura <= 2) altura1a2++;
    }
    printf("Mais de 50 anos: %d\nMenos de 60kg: %d\nEntre 1m e 2m: %d\n", mais50, menos60, altura1a2);
    return 0;
}
