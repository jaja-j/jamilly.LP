void paresDecrescente(int n){

    if(n == 0){
        printf("0 ");
        return;
    }

    printf("%d ", n);
    paresDecrescente(n - 2);
}