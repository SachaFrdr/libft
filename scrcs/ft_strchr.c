#include <stdio.h>
#include <string.h>
#include <stdlib.h>
size_t ft_strlen(const char *mot);

char *ft_strchr(const char *s, int c){
    size_t i;
    size_t n;

    i = 0;
    n = ft_strlen(s);
    while (i < n){
        if (s[i] == c){
            return (char *)(s + i);
        }
        i++;
    }
    return (NULL);
}
