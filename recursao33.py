void inverterVetor(float v[], int inicio, int fim){

    if(inicio >= fim)
        return;

    float aux = v[inicio];
    v[inicio] = v[fim];
    v[fim] = aux;

    inverterVetor(v, inicio + 1, fim - 1);
}