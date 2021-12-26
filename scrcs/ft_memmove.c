#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void *ft_bzero(void *s, size_t n){ 
    size_t i;

    i = 0;
    while(i < n)
        ((char *)s)[i++] = 0;
    return s;
}

void *ft_memmove(void *restrict dest, const void *restrict src, size_t n){
    unsigned char *pdest;
    unsigned char *psrc;
    unsigned char *pinter;
    size_t i;

    pdest = (unsigned char *)dest;
    psrc = (unsigned char *)src;
    if (!(pinter = (unsigned char *)malloc(n)))
        return NULL;
    i = 0;

    while(i < n){
        pinter[i] = psrc[i];
        i++;
    }
    i = 0;
    while(i < n){
        pdest[i] = pinter[i];
        i++;
    }
    ft_bzero(psrc, (size_t)(pdest - psrc));
    return pdest;
}

void printMem(void *memArea, size_t size){
    size_t i;

    i = 0;
    while(i < size){
        printf("Adresse : %p ", memArea+i);
        printf("Contenu : %hhu\n", ((char *)memArea)[i]);
        i++;
    }
    printf("\n\n");
}

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

