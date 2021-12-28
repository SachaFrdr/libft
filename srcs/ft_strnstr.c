#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const char *chaine1, const char *chaine2, size_t n){
    size_t j;

    j = 1;
    while(j < n){
        if (chaine2[j] != chaine1[j]){
            break;
        }
        j++;
    }
    if (j == n){
        return 1;
    }
    return 0;
}

char const *ft_strnstr(const char *s1, const char *s2, size_t n){
    size_t i;
    size_t tailleS1;
    size_t tailleS2;

    i = 0;
    tailleS2 = strlen(s2);
    tailleS1 = strlen(s1);
    if (n > tailleS2){
        n = tailleS2;
    }
    while (i < tailleS1){
        if (s2[0] == s1[i]){
            if (compare(s2, s1+i, n) == 1){
                return s1+i;
            }
        }
        i++;
    }
    return NULL;
}
