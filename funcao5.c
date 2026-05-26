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
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(ehPrimo(num))
        printf("1 (eh primo)\n");
    else
        printf("0 (nao eh primo)\n");
    return 0;
}