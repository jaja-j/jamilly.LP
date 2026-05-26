#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int inverso(int num){
    char original[20];
    char invertido[20];
    sprintf(original, "%d", num);
    int tam = strlen(original);
    for(int i = 0; i < tam; i++){
        invertido[i] = original[tam - 1 - i];
    }
    invertido[tam] = '\0';
    return atoi(invertido);
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Inverso: %d\n", inverso(n));
    return 0;
}