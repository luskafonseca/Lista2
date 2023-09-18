#include <stdio.h>

// Função para ler uma matriz
void lerMatriz(float matriz[][100], int l, int c) {
	int i, j;
    for (i = 0; i < l; i++) {
        for ( j = 0; j < c; j++) {
            printf("Digite o valor da matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(float matriz[][100], int l, int c) {
	int i, j;
    for ( i = 0; i < l; i++) {
        for ( j = 0; j < c; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para somar duas matrizes e armazenar o resultado em uma terceira matriz
void somarMatrizes(float matriz1[][100], float matriz2[][100], float resultado[][100], int l, int c) {
	int i, j;
    for ( i = 0; i < l; i++) {
        for ( j = 0; j < c; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Função para subtrair a primeira matriz da segunda e armazenar o resultado em uma terceira matriz
void subtrairMatrizes(float matriz1[][100], float matriz2[][100], float resultado[][100], int l, int c) {
	int i, j;
    for ( i = 0; i < l; i++) {
        for ( j = 0; j < c; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

// Função para adicionar uma constante a uma matriz
void adicionarConstante(float matriz[][100], int l, int c, float constante) {
	int i, j;
    for ( i = 0; i < l; i++) {
        for ( j = 0; j < c; j++) {
            matriz[i][j] += constante;
        }
    }
}

int main() {
    int l, c;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &c);

    float matriz1[100][100], matriz2[100][100], resultado[100][100],constante;
    int opcao;

    printf("Digite os elementos da primeira matriz:\n");
    lerMatriz(matriz1, l, c);

    printf("Digite os elementos da segunda matriz:\n");
    lerMatriz(matriz2, l, c);

    do {
        printf("\nMenu de Opcoes:\n");
        printf("(a) Somar as duas matrizes\n");
        printf("(b) Subtrair a primeira matriz da segunda\n");
        printf("(c) Adicionar uma constante as duas matrizes\n");
        printf("(d) Imprimir as matrizes\n");
        printf("(e) Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                somarMatrizes(matriz1, matriz2, resultado, l, c);
                printf("Resultado da soma:\n");
                imprimirMatriz(resultado, l, c);
                break;
            case 'b':
                subtrairMatrizes(matriz1, matriz2, resultado, l, c);
                printf("Resultado da subtracao:\n");
                imprimirMatriz(resultado, l, c);
                break;
            case 'c':
                printf("Digite a constante a ser adicionada as matrizes: ");
                scanf("%f", &constante);
                adicionarConstante(matriz1, l, c, constante);
                adicionarConstante(matriz2, l, c, constante);
                printf("Matrizes apos adicao da constante:\n");
                printf("Matriz 1:\n");
                imprimirMatriz(matriz1, l, c);
                printf("Matriz 2:\n");
                imprimirMatriz(matriz2, l, c);
                break;
            case 'd':
                printf("Matriz 1:\n");
                imprimirMatriz(matriz1, l, c);
                printf("Matriz 2:\n");
                imprimirMatriz(matriz2, l, c);
                break;
            case 'e':
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcão invalida. Tente novamente.\n");
        }
    } while (opcao != 'e');

    return 0;
}

