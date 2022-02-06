#include <stdlib.h>
#include "../includes/libft.h"

void *ft_calloc(size_t size){
    void *p;
    if (!(p = malloc(size))){
        return NULL;
    }
    return ft_bzero(p, size);
}