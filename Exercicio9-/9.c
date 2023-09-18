#include <stdio.h>

int main() {
    int m = 2, n = 3, p = 3, q = 2, i ,j, k;

    // Ler as matrizes X e Y do usuário
    int X[m][n], Y[p][q];
    printf("Digite os elementos da matriz X (%dx%d):\n", m, n);
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &X[i][j]);
        }
    }

    printf("Digite os elementos da matriz Y (%dx%d):\n", p, q);
    for ( i = 0; i < p; i++) {
        for ( j = 0; j < q; j++) {
            scanf("%d", &Y[i][j]);
        }
    }

    // Verificar se a multiplicação é possível
    if (n != p) {
        printf("Error !! Numero de colunas de X não e igual ao numero de linhas de Y.\n");
        return 1;
    }

    // Calcular a multiplicação e armazenar na matriz Mult
    int Mult[m][q];
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < q; j++) {
            Mult[i][j] = 0;
            for ( k = 0; k < n; k++) {
                Mult[i][j] += X[i][k] * Y[k][j];
            }
        }
    }

    // Apresentar o resultado
    printf("Matriz da multiplicacao:\n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < q; j++) {
            printf("%d ", Mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}

