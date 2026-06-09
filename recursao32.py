#include <stdio.h>

void binario(int n){

    if(n == 0)
        return;

    binario(n / 2);

    printf("%d", n % 2);
}