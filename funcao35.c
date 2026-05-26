#include <stdio.h>
// ---------------- strlen ----------------
int meuStrlen(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
// ---------------- strcmp ----------------
int meuStrcmp(char str1[], char str2[]){
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i])
            return 0;
        i++;
    }
    if(str1[i] == '\0' && str2[i] == '\0')
        return 1;
    return 0;
}
// ---------------- strncpy ----------------
void meuStrncpy(char destino[], char origem[], int n){
    int i;
    for(i = 0; i < n && origem[i] != '\0'; i++){
        destino[i] = origem[i];
    }
    destino[i] = '\0';
}
// ---------------- strcat ----------------
void meuStrcat(char destino[], char origem[]){
    int i = 0;
    int j = 0;
    while(destino[i] != '\0'){
        i++;
    }
    while(origem[j] != '\0'){
        destino[i] = origem[j];
        i++;
        j++;
    }
    destino[i] = '\0';
}
// ---------------- strnd ----------------
void meuStrnd(char texto[], char busca[]){
    int tamTexto = meuStrlen(texto);
    int tamBusca = meuStrlen(busca);
    int encontrou = 0;
    for(int i = 0; i <= tamTexto - tamBusca; i++){
        int igual = 1;
        for(int j = 0; j < tamBusca; j++){
            if(texto[i + j] != busca[j]){
                igual = 0;
                break;
            }
        }
        if(igual){
            printf("Encontrou na posicao %d\n", i);
            encontrou = 1;
        }
    }
    if(!encontrou)
        printf("Nao encontrou.\n");
}
int main(){
    char a[100] = "programacao";
    char b[100] = "programacao";
    char c[100];
    printf("strlen: %d\n", meuStrlen(a));
    printf("strcmp: %d\n", meuStrcmp(a, b));
    meuStrncpy(c, a, 5);
    printf("strncpy: %s\n", c);
    meuStrcat(a, " em C");
    printf("strcat: %s\n", a);
    meuStrnd("banana", "ana");
    return 0;
}