#include<stdio.h>

main(){

 int vetor[5], maior = 0, menor = 0;

 for(int i = 0; i < 5; i++){
     printf("\ndigite valores: ");
     scanf("%d", &vetor[i]);
 }
  maior = vetor[0];
  menor = vetor[0];

  for(int i = 0; i < 5; i ++){
      if(vetor[i] > maior){
         maior = vetor [i];
      }
      if(vetor[i] < menor){
         menor = vetor[i];

      }

  }

  printf("\nmaior: %d menor: %d", maior, menor);
}

