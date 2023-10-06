#include<stdio.h>

main(){

  int vetor[10], qtdpares = 0;

  for( int i = 0; i < 10; i++){
       
      printf("\ndigite os valores: ");
      scanf("%d", &vetor[i]);
      if(vetor[i] % 2 == 0){
        printf("numero par!\n");
        qtdpares++;
        
      }else{
        printf("o numero e impar!\n");
      }
  }
  printf("total de pares: %d", &qtdpares);

}