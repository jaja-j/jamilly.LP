#include <stdio.h>
#include <string.h>

int ehPalindromo(char str[]){
    char limpa[200];
    char invertida[200];
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ' ' && str[i] != '-' && str[i] != ','){
            if(str[i] >= 'A' && str[i] <= 'Z')
                limpa[j] = str[i] + 32;
            else
                limpa[j] = str[i];
            j++;
        }
    }
    limpa[j] = '\0';
    int tam = strlen(limpa);
    // Inverte a string
    for(int i = 0; i < tam; i++){
        invertida[i] = limpa[tam - 1 - i];
    }
    invertida[tam] = '\0';
    // Compara
    if(strcmp(limpa, invertida) == 0)
        return 1;
    return 0;
}
int main(){
    char frase[200];
    printf("Digite uma palavra ou frase: ");
    fgets(frase, 200, stdin);
    // remove o \n do fgets
    frase[strlen(frase)-1] = '\0';
    if(ehPalindromo(frase))
        printf("Eh palindromo\n");
    else
        printf("Nao eh palindromo\n");
    return 0;
}