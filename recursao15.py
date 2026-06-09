float serie(int n){

    if(n == 1)
        return 2.0;

    return ((1.0 + n*n)/n) + serie(n - 1);
}