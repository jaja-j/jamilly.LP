#include <stdio.h>

void numeros(int x, int y){
    for(int i = x; i <= y; i++){
        if(i % 13 == 5){
            printf("%d\n", i);
        }
    }
}
int main(){
    int x, y;
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);
    numeros(x, y);
    return 0;
}