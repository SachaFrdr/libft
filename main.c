#include <stdio.h>
#include "./includes/libft.h"
#include <string.h>
#include <stdlib.h>

int main(){
    //#######################################ft_strnstr.c###########################################################
    char *b1 = "Sacha test la fonction strnstr";
    char *b2 = "la";
    size_t m = 3;
    printf("Chaine 1 : %s\nChaine 2 : %s\nTaille : %ld\nResultat fonction : %s\n", b1, b2, m, ft_strnstr(b1, b2, m));
    printf("Chaine 1 : %s\nChaine 2 : %s\nTaille : %ld\nResultat fonction : %s\n", b1, b2, m, strstr(b1, b2));
}
//ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABgQDM0GnAZinjjww9B8CUgoaGd8iJMtyKeFf6slrgoTu3ad1MYFsOkXLLoOsn5WI0fMICVr2ukwfquBqGzZtSPhcMlFdc/1nOnOaGniadRFt3d7yPMHicSkPTpvLv7TVbAorNQljF0Mm06CB4/i+lMhG5eE26Ij0CuodL2GiI4+vX954QC3Ftg983fAXyHyOxjiMabKWIV7BvKmh8MpwqAeYD407yt9XY4OC32HDjwdZrJTX0PRyRjI5kS/Gw5fQt3JVvCzPJ7sd0LLzHNMBXFx/MLYQnz+HQQZRin+KL22c3vMmunpmpUA2xbOcBEnuL5yaLgsy3ghIzdQ4/a0G+xRI/Bz4j/LWVchEP5r1OzLmnRjo6wcENayZ6nj0qw08A3pBZQxEC2S1CPNnZreFJmlu759CJuqHwPDgKQL3WMi9jtyk2nAMQ9vMYQDncaa+T0xJ7Q3KpW1fkvPQCoSWZSNVNzEcVhYHTf6StpcsOnoCgs9tw91tsm0XgnP9mhTDn0Xs= sachafrdr@DESKTOP-TV1K7VE