#include <stdio.h>
#include <string.h>
//compare les n premiers octets de deux chaines de caracteres

int ft_strncmp(const char * first, const char * second, size_t length){
    size_t i;

    i = 0;
    for (i = 0; i < length; i++){
        if (first[i] == second[i]){
            return 0;
        }
        if (first[i] < second[i]){
            return -1;
        }
        if (first[i] > second[i]){
            return 1;
        }
    }
    return 0;
}
