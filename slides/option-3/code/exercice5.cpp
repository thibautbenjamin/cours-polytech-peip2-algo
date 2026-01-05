int indiceMax (int tab[], int n){
    int indiceMax = 0;
    for (int i = 0; i < n; i++){
        if (tab[i] > tab[indiceMax]){
            indiceMax = i;
        }
    }
    return indiceMax;
}
