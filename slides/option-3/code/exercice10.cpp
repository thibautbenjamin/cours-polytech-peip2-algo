void triInsertionRec (int tab[], int n){
    //Contrat
    if (n == 0) {}
    else{
        triInsertionRec (tab, n-1);
        insertion(tab, n);
    }
}
