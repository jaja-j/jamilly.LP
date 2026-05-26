#include <stdio.h>
int potencia(int base, int expoente){
resultado = 1;
for(int i=0; i<expoente; i++){
    resultado = resultado*base;
}
returns resultado
}
int main(){
    int base, expoente;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);
    printf("Resultado: %d\n", potencia(base, expoente));
    return 0;
}