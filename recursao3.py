int somaCubos(int n){
    if(n == 1)
        return 1;

    return n*n*n + somaCubos(n - 1);
}