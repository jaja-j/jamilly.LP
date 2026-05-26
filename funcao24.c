#include <stdio.h>
long long fatorial(int n){
    long long fat = 1;
    for(int i = 1; i <= n; i++){
        fat *= i;
    }
    return fat;
}
long long combinacao(int n, int r){
    return fatorial(n) / (fatorial(r) * fatorial(n - r));
}
int main(){
    int n, r;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite r: ");
    scanf("%d", &r);
    printf("Combinacoes: %lld\n", combinacao(n, r));
    return 0;
}