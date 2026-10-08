#include <stdio.h>

int main(void) {
    int v[5] = {0x11223344, 0x55667788, 1, 2, 3};
    
    for (int i = 0; i < 5; i++) {
        printf("v[%d] = %d (0x%08x) @ %p\n", i, v[i], v[i], (void*)&v[i]);
        unsigned char *ptr = (unsigned char *)&v[i];
        printf("bytes: ");
        for (size_t j = 0; j < sizeof(int); j++) {
            printf("%02x ", ptr[j]);
        }
        printf("\n");
    }
    
    double d = 3.14;
    printf("\ndouble d = %f @ %p\nbytes: ", d, (void*)&d);
    unsigned char *pd = (unsigned char *)&d;
    for (size_t j = 0; j < sizeof(double); j++) {
        printf("%02x ", pd[j]);
    }
    printf("\n");
    
    return 0;
}