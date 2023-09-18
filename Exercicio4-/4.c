#include <stdio.h>

int main() {
  int l, c, i, j;

  printf("Digite o numero de linhas da matriz: ");
  scanf("%d", &l);
  printf("Digite o numero de colunas da matriz: ");
  scanf("%d", &c);

  // Verifica se a matriz é maior que 100
  if (l > 100 || c > 100) {
    printf("A matriz nao pode ser maior que 100.\n");
    return 0;
  }

  // Gera a matriz
  int matriz[l][c];
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      matriz[i][j] = rand() % 100;
    }
  }

  // Exibe a diagonal principal da matriz
  printf("A diagonal principal da matriz :\n");
  for (i = 0; i < l; i++) {
    printf("%d ", matriz[i][i]);
  }
  printf("\n");

  return 0;
}

