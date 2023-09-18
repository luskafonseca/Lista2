#include <stdio.h>

int main() {

  int l, c, maior, menor, i, j;


  // Solicita ao usu�rio as dimens�es da matriz
  printf("Digite o n�mero de linhas da matriz: ");
  scanf("%d", &l);
  printf("Digite o n�mero de colunas da matriz: ");
  scanf("%d", &c);

  // Aloca mem�ria para a matriz
  int matriz[l][c];

  // L� os valores da matriz
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("Digite o valor da matriz na posicao [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Inicializa as vari�veis que armazenar�o o maior e o menor valor da matriz
  maior = matriz[0][0];
  menor = matriz[0][0];

  // Encontra o maior e o menor valor da matriz
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
      } else if (matriz[i][j] < menor) {
        menor = matriz[i][j];
      }
    }
  }

  // Imprime a matriz
  printf("A matriz :\n");
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  // Imprime o maior e o menor valor da matriz
  printf("O maior valor da matriz : %d.\n", maior);
  printf("O menor valor da matriz : %d.\n", menor);

  return 0;
}

