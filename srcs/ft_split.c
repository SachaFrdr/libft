#include <stdlib.h>
#include <stdio.h>
#include "../includes/libft.h"

char *skip_c(char *s, char c){
	while (*s == c)
		s += 1;
	return s;
}

char *skip_no_c(char *s, char c){
	while (*s != c && *s)
		s += 1;
	return s;
}

size_t skip_c_index(char *s, char c){
	size_t i;

	i = 0;
	while(s[i] == c)
		i++;
	return i;
}

size_t skip_no_c_index(char *s, char c){
	size_t i;

	i = 0;
	while(s[i] != c && s[i])
		i++;
	return i;
}

int words(char const *s, char c){
    int i;
    int words;

    i = 0;
    words = 0;
    while (s[i] != '\0'){
        if (s[i] != c){
            words++;
            while (s[i] != c && s[i] != '\0'){
                i++;
            }
        }
        else {
            while (s[i] == c){
                i++;
            }
        }
    }
    return words;
}

int sizeWord(char const *s, char c){
    int i;

    i = 0;
    while(s[i] != c && s[i]){
        i++;
    }
    return i; 
}

char **ft_split(char const *s, char c){
    char **tab;
    int i;
    int length;
    char *tmp;
    int b;
    int j;

    i = 0;
    b = 0;
    if (!(tab = (char **)ft_calloc(sizeof(char *) * (words(s, c) + 1)))){
        return NULL;
    }

    while(s[i]){
        while(s[i] == c){
            i++;
        }
        if(s[i]){
            length = sizeWord(s+i, c);
            if (!(tmp = (char *)ft_calloc(sizeof(char) * (length + 1)))){
                return NULL;
            }
            tab[b++] = tmp;
            j = 0;
            while(s[i] != c && s[i]){
                tmp[j] = s[i];
                j++;
                i++;
            }
        }
    }
    return tab;
}

void testWords(){
    printf("3 %d\n", words("coucou les amis", ' '));
    printf("3 %d\n", words(" coucou les amis ", ' '));
    printf("0 %d\n", words("", ' '));
    printf("0 %d\n", words("   ", ' '));
    printf("3 %d\n", words("coucou   les   amis", ' '));
    printf("3 %d\n", words("   coucou   les   amis   ", ' '));
}

int main(){
    int i;

    i = 0;
    char **test = ft_split("coucou les amis", ' ');
    while(test[i]){
        printf("%s\n", test[i]);
        i++;
    }
    printf("\n");
    i = 0;
    test = ft_split(" coucou les amis ", ' ');
    while(test[i]){
        printf("%s\n", test[i]);
        i++;
    }
    printf("\n");
    i = 0;
    test = ft_split("", ' ');
    while(test[i]){
        printf("%s\n", test[i]);
        i++;
    }
    printf("\n");
    i = 0;
    test = ft_split("   ", ' ');
    while(test[i]){
        printf("%s\n", test[i]);
        i++;
    }
    printf("\n");
    i = 0;
    test = ft_split("coucou   les   amis", ' ');
    while(test[i]){
        printf("%s\n", test[i]);
        i++;
    }
    printf("\n");
    i = 0;
    test = ft_split("  coucou   les   amis  ", ' ');
    while(test[i]){
        printf("%s\n", test[i]);
        i++;
    }
}