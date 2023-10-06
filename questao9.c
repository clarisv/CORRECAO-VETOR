#include <stdio.h>

main() {

  int vetor[6];

  for (int i = 0; i < 6; i++){

    do{
    printf("\ndigite um numero par: ");
    scanf("%d", &vetor[i]);

    if (vetor[i] % 2 != 0) {
        printf("O numero nao e par. Tente novamente.\n");
            }
        }while (vetor[i] % 2 != 0);
    }

    for (int i = 0; i < 6; i++) {
        printf("\nvetor[%d] = %d", i, vetor[i]);
    }

    return 0;
}

