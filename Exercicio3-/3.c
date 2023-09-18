#include <stdio.h>

int main() {

  int l, c, x, contagem = 0, i, j;

  // Solicita ao usuário as dimensões da matriz
  printf("Digite o numero de linhas da matriz: ");
  scanf("%d", &l);
  printf("Digite o numero de colunas da matriz: ");
  scanf("%d", &c);

  int matriz[l][c];
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("Digite o valor da matriz na posicao [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Solicita ao usuário o valor de X
  printf("Digite o valor de X: ");
  scanf("%d", &x);

  // Conta os números iguais a X na matriz
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      if (matriz[i][j] == x) {
        contagem++;
      }
    }
  }

  // Imprime o número de números iguais a X na matriz
  printf("QTD de numeros iguais a X :  %d\n", contagem);

  return 0;
}

