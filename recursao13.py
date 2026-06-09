int somaSerie(int i, int j, int k){

    if(i > j)
        return 0;

    return i + somaSerie(i + k, j, k);
}