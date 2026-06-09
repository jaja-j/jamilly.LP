int fatorialDuplo(int n){

    if(n == 1)
        return 1;

    return n * fatorialDuplo(n - 2);
}