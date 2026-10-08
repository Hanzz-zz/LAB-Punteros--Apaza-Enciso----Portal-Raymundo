#include <stdio.h>

int main(void) {
    int m[3][4];
    int t[4][3];
    int k;
    int suma_total = 0;
    
    printf("Ingrese 12 valores para la matriz 3x4:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &m[i][j]);
        }
    }
    
    printf("\nMatriz 3x4:\n");
    for(int i=0; i<3; i++){
        int suma_fila = 0;
        for(int j=0; j<4; j++){
            printf("%4d", m[i][j]);
            suma_fila += m[i][j];
            suma_total += m[i][j];
            t[j][i] = m[i][j]; // Preparar transpuesta
        }
        printf(" | suma fila = %d\n", suma_fila);
    }
    
    printf("----------------\n");
    for(int j=0; j<4; j++){
        int suma_col = 0;
        for(int i=0; i<3; i++){
            suma_col += m[i][j];
        }
        printf("%4d", suma_col);
    }
    printf(" (sumas de columnas)\nSuma total: %d\n", suma_total);
    
    printf("\nTranspuesta 4x3:\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            printf("%4d", t[i][j]);
        }
        printf("\n");
    }
    
    printf("\nIngrese un escalar k: ");
    scanf("%d", &k);
    printf("Escalar k=%d:\n", k);
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%4d", m[i][j] * k);
        }
        printf("\n");
    }
    
    return 0;
}
