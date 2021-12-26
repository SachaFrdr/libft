#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *mot){
    size_t i;

    i = 0;
    if (mot == NULL)
        return 0;
    while(mot[i] != '\0'){
        i++;
    }
    return i;
}