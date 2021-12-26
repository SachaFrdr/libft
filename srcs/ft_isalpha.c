#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c){
    if (('A' <= c && c <= 'Z')){
        return 1;
    }
    if (('a' <= c && c <= 'z')){
        return 2;
    }
    return 0;
}