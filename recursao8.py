void decrescente(int n){
    if(n == 0){
        printf("0 ");
        return;
    }

    printf("%d ", n);
    decrescente(n - 1);
}