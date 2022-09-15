#include <stdio.h>

int soma, numero, cont;

int main(void) {
  
    while(numero >= 0) {
      soma += numero;
      printf("Digite um número: \n");
      scanf("%d", &numero);
    }
      printf("Soma Numeros %d\n", soma);
}