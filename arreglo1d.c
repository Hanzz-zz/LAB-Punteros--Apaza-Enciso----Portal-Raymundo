#include <stdio.h>
int main(){
    int datos[10], minimo, maximo, temporal, original, invertido;
    int suma = 0, pares = 0, impares = 0;
    double promedio;
    printf("Ingrese 10 numeros enteros:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &datos[i]);
        suma += datos[i];
        if(datos[i] % 2 == 0){
            pares++;
        } else {
            impares++;
        }
    }
    promedio = (double)suma / 10;
    minimo = datos[0];
    maximo = datos[0];
    for(int i = 1; i < 10; i++){
        if(datos[i] < minimo){
            minimo = datos[i];
        }
        if(datos[i] > maximo){
            maximo = datos[i];
        }
    }
    printf("Suma     : %d\n", suma);
    printf("Promedio : %.2f\n", promedio);
    printf("Minimo   : %d\n", minimo);
    printf("Maximo   : %d\n", maximo);
    printf("Pares    : %d\n", pares);
    printf("Impares  : %d\n", impares);
    printf("Original : ");
    for(int i = 0; i < 10; i++){
        printf("%d ", datos[i]);
    }
    printf("\nInvertido: ");
    for(int i = 9; i >= 0; i--){
        printf("%d ", datos[i]);
    }
    printf("\n");


    return 0;
}