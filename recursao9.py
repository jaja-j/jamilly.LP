void paresCrescente(int n){

    if(n == 0){
        printf("0 ");
        return;
    }

    paresCrescente(n - 2);
    printf("%d ", n);
}