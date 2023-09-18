#include <stdio.h>

int main() {
  int l, c, i, j;


  printf("Digite o numero de linhas da matriz 1: ");
  scanf("%d", &l);
  printf("Digite o numero de colunas da matriz 1: ");
  scanf("%d", &c);

  // Verifica se as matrizes são de mesma ordem
  if (l != c) {
    printf("As matrizes não são de mesma ordem.\n");
    return 0;
  }

  // Aloca memória para as matrizes
  int matriz1[l][c], matriz2[l][c], matrizResultado[l][c];

  // Lê os valores das matrizes
  printf("Digite os valores da matriz 1:\n");
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("Digite o valor da matriz 1 na posição [%d][%d]: ", i, j);
      scanf("%d", &matriz1[i][j]);
    }
  }

  printf("Digite os valores da matriz 2:\n");
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("Digite o valor da matriz 2 na posição [%d][%d]: ", i, j);
      scanf("%d", &matriz2[i][j]);
    }
  }

  // Calcula a soma das matrizes
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }

  // Exibe a soma das matrizes
  printf("A soma das matrizes é:\n");
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("%d ", matrizResultado[i][j]);
    }
    printf("\n");
  }

  return 0;
}

