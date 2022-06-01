#include <stdio.h>

int main(){
    char nome;

    printf("Qual o seu nome?\n");
    scanf("%c%*c",nome);

    printf("O nome é:\n %n",nome);
    return 0;
}
