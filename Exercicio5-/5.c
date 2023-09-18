#include <stdio.h>

int main() {
  int l, c, i, j;

  printf("Digite o numero de linhas da matriz: ");
  scanf("%d", &l);
  printf("Digite o numero de colunas da matriz: ");
  scanf("%d", &c);

  // Gera a matriz
  int matriz[l][c];
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      matriz[i][j] = rand() % 100;
    }
  }

  // Exibe a diagonal secund�ria da matriz
  printf("A diagonal secund�ria da matriz :\n");
  for (i = 0; i < l; i++) {
    j = c - i - 1;
    printf("%d ", matriz[i][j]);
  }
  printf("\n");

  return 0;
}

