#include <stdio.h>
void divisores(int n){
    printf("Divisores de %d:\n", n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }
    }
}
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    divisores(num);
    return 0;
}