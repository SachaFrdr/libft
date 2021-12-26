#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c){
    if ('A' <= c && c <= 'Z'){
        return 1;
    }
    if ('a' <= c && c <= 'z'){
        return 2;
    }
    if ('0' <= c && c <= '9'){
        return 4;
    }
    if (('!' <= c && c <= '/') || (':' <= c && c <= '@') || ('[' <= c && c <= '`') || ('{' <= c && c <= '~')){
        return 16;
    }
    if (c == ' '){
        return 64;
    }
    return 0;
}
