#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long fatorial(char num[]){
    int n = atoi(num);
    if(n < 0)
        return -1;
    long long fat = 1;
    for(int i = 1; i <= n; i++){
        fat *= i;
    }
    return fat;
}
int main(){
    char numero[20];
    printf("Digite um numero: ");
    scanf("%s", numero);
    printf("Quantidade de digitos: %d\n", strlen(numero));
    printf("Fatorial: %lld\n", fatorial(numero));
    return 0;
}