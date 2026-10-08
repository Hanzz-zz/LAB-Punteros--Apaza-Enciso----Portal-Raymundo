#include <stdio.h>

int main(void) {
    char *s = "Hola, mundo";
    
    printf("Cadena: ");
    for (char *p = s; *p != '\0'; p++) {
        putchar(*p);
    }
    printf("\n");
    
    int len = 0;
    for (char *p = s; *p != '\0'; p++) {
        len++;
    }
    printf("Longitud: %d\n", len);
    
    char s2[] = "Hola, mundo";
    s2[0] = 'h'; 
    printf("Arreglo modificable: %s\n", s2);
    
    // Descomentar esto causará un error de segmentación (solo-lectura)
    // s[0] = 'h'; 
    
    return 0;
}