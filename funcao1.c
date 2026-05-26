#include <stdio.h>
int multiplicar(int n1, int n2);
int main(){
    int a, b;
    Printf("Digite os valores para a multiplicação: ");
    scanf("Resultado: %d\n", multiplicar(a, b));
    return 0;
    int multiplicar(int n1, int n2){
        int resultado = 0; // guarda a soma 
        for(int i=0; i<n2; i++){
            resultado = resultado + n1;
        }
        return resultado;

    }
}