#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n){
    unsigned char *pdest;
    unsigned char *psrc;
    size_t i;

    pdest = (unsigned char *)dest;
    psrc = (unsigned char *)src;
    i = 0;

    while(i < n){
        pdest[i] = psrc[i];
        i++;
    }
    return pdest;
}


