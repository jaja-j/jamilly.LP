void inverterNumero(int n){

    if(n < 10){
        printf("%d", n);
        return;
    }

    printf("%d", n % 10);

    inverterNumero(n / 10);
}