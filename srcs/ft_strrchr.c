#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strrchr(const char *s, int c){
    int i;
    int j;
    int p;
    char *news = NULL;

    i = 0;
    p = 0;
    j = strlen(s);
    news = malloc(50);
    for (i=0; i < j; i++){
        if (s[i] == c){
            p = i;
        }
    }

    i=0;
    while(p < j){
        news[i] = s[p];
        p++;
        i++;
    }
    return news;
}