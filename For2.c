#include <stdio.h>

int soma;

int main(void) {
  int numero;
  for(int i = 0; i < 5; i++) {
    printf("Digite um número: \n");
    printf("O contador esta em %d: \n", i);
    scanf("%d", &numero);
    if(numero % 2 != 0){
      continue;
    }
      break;
    }
      printf("O numero %d é par\n", numero);
      soma += numero;
      printf("Soma %d\n", soma);
}
