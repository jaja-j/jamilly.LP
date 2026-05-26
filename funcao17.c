#include <stdio.h>

void romano(int n){
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40,
                     10, 9, 5, 4, 1};
    char simbolos[][3] = {"M", "CM", "D", "CD", "C", "XC",
                          "L", "XL", "X", "IX", "V", "IV", "I"};
    printf("Numero romano: ");
    for(int i = 0; i < 13; i++){
        while(n >= valores[i]){
            printf("%s", simbolos[i]);
            n -= valores[i];
        }
    }
    printf("\n");
}
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    romano(num);
    return 0;
}