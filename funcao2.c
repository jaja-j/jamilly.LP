#include <stdio.h>
int divisao(int a, int b){
int quociente = 0;
int soma = b;
if (b == 0){
    printf("Erro, divisão por 0\n");
    return 0;
} while(soma <= a){
    soma = soma + b;
    quocient++;
} return quociente;
}int main (){
    int n1, n2,
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &n1, &n2);
    printf("Resultado da divisão: %d", divisao(num1, num2));
    return 0;
}