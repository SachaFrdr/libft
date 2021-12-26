#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//examine les n premiers octets de la zone mémoire pointée par s à la recherche de la première occurrence de c

void *ft_memchr(const void *s, int c, size_t n){
    size_t i;
    unsigned char *p;

    i = 0;
    p = (unsigned char *)s;

    while (i < n){
        if (p[i] == c){
            return ((void *)(p + i));
        }
        i++;
    }
    return (NULL);
}
void printMem(void *memArea, size_t size){
    size_t i;

    i = 0;
    if (memArea == NULL){
        printf("Adresse : 0x0\n");
        return ;
    }
    while(i < size){
        printf("Adresse : %p ", memArea+i);
        printf("Contenu : %hhu\n", ((char *)memArea)[i]);
        i++;
    }
    printf("\n\n");
}
