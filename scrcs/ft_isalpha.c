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

int main(){
    for (int i = 0; i < 128; i++){
        if (ft_isalpha(i) != isalpha(i)){
            printf("L'index %d est une erreur : %d %d\n", i, ft_isalpha(i), isalpha(i));
        }
    }
}