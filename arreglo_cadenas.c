#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    printf("Cuantas cadenas: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) return 1;
    getchar(); // Consumir el salto de linea del buffer
    
    char **lineas = (char**)malloc(n * sizeof(char*));
    if (!lineas) return 1;
    
    char buffer[256];
    for (int i = 0; i < n; i++) {
        printf("Cadena %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = 0; // Quitar salto de línea
        
        lineas[i] = strdup(buffer); // Reserva exacta y copia
    }
    
    for (int i = 0; i < n; i++) {
        printf("lineas[%d] @ %p\n", i, (void*)&lineas[i]);
        printf(" -> \"%s\" (len=%zu)\n", lineas[i], strlen(lineas[i]));
    }
    
    for (int i = 0; i < n; i++) {
        free(lineas[i]);
    }
    free(lineas);
    
    return 0;
}