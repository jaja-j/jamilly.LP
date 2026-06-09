void imprimeSerie(int i, int j, int k){

    if(i > j)
        return;

    printf("%d ", i);

    imprimeSerie(i + k, j, k);
}