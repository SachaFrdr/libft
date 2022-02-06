#include <stdio.h>
#include "./includes/libft.h"
#include <string.h>
#include <stdlib.h>

void printMem(void *memArea, size_t size){
    size_t i;

    i = 0;
    while(i < size){
        printf("Adresse : %p ", memArea+i);
        printf("Contenu : %hhu\n", ((char *)memArea)[i]);
        i++;
    }
    printf("\n\n");
}

int main(){
    //#######################################ft_strnstr.c###########################################################
    // char *b1 = "Sacha test la fonction strnstr";
    // char *b2 = "la";
    // size_t m = 3;
    // printf("Chaine 1 : %s\nChaine 2 : %s\nTaille : %ld\nResultat fonction : %s\n", b1, b2, m, ft_strnstr(b1, b2, m));
    // printf("Chaine 1 : %s\nChaine 2 : %s\nTaille : %ld\nResultat fonction : %s\n", b1, b2, m, strstr(b1, b2));


    // size_t size;
    
    // size = 10;
    // printMem(ft_calloc(size), size);


    char s[] = "";
    printf("Retour de la fonction ft_strdup : %s\n", ft_strdup(s));
    printf("Retour de la fonction strdup : %s\n", strdup(s));
    if (strcmp(ft_strdup(s), strdup(s)) == 0){
        printf("On est ok chef\n");
    }
}