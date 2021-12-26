#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c){
    if ('A' <= c && c <= 'Z'){
        c += 'a' - 'A'; //32
    }
    return c;
}