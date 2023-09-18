#include <stdio.h>

int main() {
  int l, c, i, j, escalar;

  printf("Digite o numero de linhas da matriz: ");
  scanf("%d", &l);
  printf("Digite o numero de colunas da matriz: ");
  scanf("%d", &c);

  // Solicita ao usuário o escalar
  printf("Digite o escalar: ");
  scanf("%d", &escalar);

  // Aloca memória para a matriz
  int matriz[l][c];

  // Lê os valores da matriz
  printf("Digite os valores da matriz:\n");
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("Digite o valor da matriz na posicao [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Multiplica a matriz pelo escalar
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      matriz[i][j] = matriz[i][j] * escalar;
    }
  }

  // Exibe a matriz multiplicada
  printf("Matriz multiplicada pelo escalar:\n");
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}

