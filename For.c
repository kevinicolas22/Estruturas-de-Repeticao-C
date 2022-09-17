#include <stdio.h>

int soma;

int main(void) {
  int numero;
  for(int i = 0; i < 5; i++) {
    printf("Digite um número: \n");
    scanf("%d", &numero);
    soma += numero;
    if(soma >= 20)
      break;
    }
}