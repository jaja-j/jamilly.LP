int menor(int v[], int n){

    if(n == 1)
        return v[0];

    int m = menor(v, n - 1);

    if(v[n - 1] < m)
        return v[n - 1];

    return m;
}