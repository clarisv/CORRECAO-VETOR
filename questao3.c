#include<stdio.h>

main(){

    int vetorA[10], vetorB[10];

    for(int i = 0; i < 10; i++){
        printf("digite os valores: ");
        scanf("%d", &vetorA[i]);

    }

    for(int i = 0; i < 10; i++){
       vetorB[i] = vetorA[i] * vetorA[i];
       printf("VetorA[%d] = %d - VetorB[%d] = %d", i, vetorA[i], i, vetorB[i]);

    }

   return 0;
   
}