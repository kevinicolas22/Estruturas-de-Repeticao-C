#include <stdio.h>

int soma, numero, cont;

int main(void) {
    
    while(cont < 5) {
      printf("Digite um número: \n");
      scanf("%d", &numero);
      soma = soma + numero;
      cont+=1;
    }
  
  printf("A soma é %d\n", soma);
  
  } 

}