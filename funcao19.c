#include <stdio.h>

void binario(int n){
    int bin[100];
    int i = 0;
    while(n > 0){
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binario: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", bin[j]);
    }
    printf("\n");
}
int main(){
    int num;
    printf("Digite um numero positivo: ");
    scanf("%d", &num);
    binario(num);
    return 0;
}