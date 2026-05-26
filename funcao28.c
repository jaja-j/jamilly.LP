#include <stdio.h>

void fibonacci(int n){
    int a = 0;
    int b = 1;
    int prox;
    printf("%d %d ", a, b);
    for(int i = 3; i <= n; i++){
        prox = a + b;
        printf("%d ", prox);
        a = b;
        b = prox;
    }
}
int main(){
    int termos;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &termos);
    fibonacci(termos);
    return 0;
}