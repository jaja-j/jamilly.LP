#include <stdio.h>
int menorQuadrado(int n){
    int i = 1;
    while(i * i <= n){
        i++;
    }
    return i;
}
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Resultado: %d\n", menorQuadrado(num));
    return 0;
}