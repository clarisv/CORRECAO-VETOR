#include<stdio.h>

main(){

 int vetor[5], iguais;

 for(int i = 0; i < 5; i ++){
     printf("digite os valores: ");
     scanf("%d", &vetor[i]);

 }
 for(int i = 0; i < 5; i ++){
     iguais = 0;
     for(int j = i +1; j < 5; j++){
     if(vetor[i] == vetor[j]){
        printf("%d", vetor[i]);


     }


     }

 }







}