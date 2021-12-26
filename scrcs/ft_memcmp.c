#include <string.h> 
#include <stdio.h>
#include <stdlib.h>
//compare les n premiers octets des zones memoires s1 et s2

void *ft_memset(void *s, int byte, size_t n){
    size_t i;

    i = 0;
    while(i < n)
        ((char *)s)[i++] = byte;
    return s;
}

void bin(unsigned n)
{
    unsigned i;
    size_t count = 0;
    for (i = 1 << 31; i > 0; i = i / 2)
    {
        (n & i) ? printf("1") : printf("0");
        count += 1;
        if (count % 8 == 0)
            printf(" ");
    }
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

int ft_memcmp(const void *s1, const void *s2, size_t n){
    size_t i;
    unsigned char *p1;
    unsigned char *p2;

    i = 0;
    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;

    if (p1 == NULL || p2 == NULL){
        return -2;
    }
    while (i < n){
        if(p1[i] > p2[i]){
            return 1;
        }
        if(p1[i] < p2[i]){
            return -1;
        }
        i++;
    }
    return 0;
}

