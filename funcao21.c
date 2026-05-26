#include <stdio.h>

int tipoTriangulo(int a, int b, int c){
    //vê qual é a forma do triângulo
    if(a + b <= c || a + c <= b || b + c <= a)
        return 0;
    // Equilátero
    if(a == b && b == c)
        return 1;
    // Isósceles
    if(a == b || a == c || b == c)
        return 2;
    // Escaleno
    return 3;
}
int main(){
    int x, y, z;
    printf("Digite os 3 lados: ");
    scanf("%d %d %d", &x, &y, &z);
    int resultado = tipoTriangulo(x, y, z);
    printf("Resultado: %d\n", resultado);
    return 0;
}