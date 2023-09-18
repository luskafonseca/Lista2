#include <stdio.h>

int main() {
  int l, c, i, j;


  printf("Digite o numero de linhas da matriz 1: ");
  scanf("%d", &l);
  printf("Digite o numero de colunas da matriz 1: ");
  scanf("%d", &c);

  // Verifica se as matrizes s�o de mesma ordem
  if (l != c) {
    printf("As matrizes n�o s�o de mesma ordem.\n");
    return 0;
  }

  // Aloca mem�ria para as matrizes
  int matriz1[l][c], matriz2[l][c], matrizResultado[l][c];

  // L� os valores das matrizes
  printf("Digite os valores da matriz 1:\n");
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("Digite o valor da matriz 1 na posi��o [%d][%d]: ", i, j);
      scanf("%d", &matriz1[i][j]);
    }
  }

  printf("Digite os valores da matriz 2:\n");
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("Digite o valor da matriz 2 na posi��o [%d][%d]: ", i, j);
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
  printf("A soma das matrizes �:\n");
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("%d ", matrizResultado[i][j]);
    }
    printf("\n");
  }

  return 0;
}

