#include <stdio.h>

	int main(){
		int mat[25][25] = {0}, i, j, k, raios, aux = 0;
		printf("Entradas\n");
		scanf("%d", &raios);
		
		for (i = 0; i < raios; i++) {
        	scanf("%d %d", &j, &k);
			mat[j][k]++;	
        }
        
        for (i = 0; i < 11; i++) {
        	for (j = 0; j < 11; j++) {
            	if(mat[i][j] > 1){
            		aux = 1;
				}
	        }
	    }
		
		system("cls");
		
		printf("%d", aux);
		return 0;
	}
