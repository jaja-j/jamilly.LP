void imprimeVetor(int v[], int n, int i){

    if(i == n)
        return;

    printf("%d ", v[i]);

    imprimeVetor(v, n, i + 1);
}