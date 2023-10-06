#include <stdio.h>

int main(){

  int vetor[8];
  int x, y, soma = 0;

  printf("digite as posicoes do vetor:\n");
  for(int i = 1; i < 8; i++){
        printf("vetor[%d]", i);
        scanf("%d", &vetor[i]);

    }
      printf("Digite o valor de x:");
      scanf("%d", &x);
      printf("Digite o valor de y:");
      scanf("%d", &y);

  for(int i = 1; i < 8; i++){
      if(x >= 0 && x < 8 && y >= 0 && y < 8){
          int soma = vetor[x] + vetor[y];
          printf("A soma dos valores nas posicoes %d e %d é: %d\n", x, y, soma);
      }
  }

}