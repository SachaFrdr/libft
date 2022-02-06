#include <stdlib.h>
#include "../includes/libft.h"

char *ft_strdup(const char *s){
    size_t taille;
    char *s2;

    taille = ft_strlen(s);
    if (!(s2 = (char *)ft_calloc(taille))){
        return NULL;
    }
    return (char *)ft_memcpy(s2, s, taille);
}