void crescente(int n){
    if(n == 0){
        printf("0 ");
        return;
    }

    crescente(n - 1);
    printf("%d ", n);
}