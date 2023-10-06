#include <stdio.h>

main(){


    int vetor[5], maior = 0, posicaoMaior = -1;

    for(int i = 0; i < 5; i++) {
        printf("\ndigite valores: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }
    }

    if (posicaoMaior != -1) {
        printf("\nmaior numero: %d, posicao: %d", maior, posicaoMaior);

    } else {
        printf("\nnumero invalido: ");
        
    }

    return 0;

}
