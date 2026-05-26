#include <stdio.h>

int ehPrimo(int n){
    if(n <= 1)
        return 0;
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int quantidadePrimos(int x, int y){
    int cont = 0;
    for(int i = x + 1; i < y; i++){

        if(ehPrimo(i))
            cont++;
    }
    return cont;
}
int main(){
    int x, y;
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);
    printf("Quantidade de primos: %d\n", quantidadePrimos(x, y));

    return 0;
}