#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int byte, size_t n){ 
    size_t i;

    i = 0;
    while(i < n)
        ((char *)s)[i++] = byte;
    return s;
}
