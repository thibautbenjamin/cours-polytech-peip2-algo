int pgcd (int a, int b){
    //Contrat
    if (a == b){ return a; }
    else if (a > b){ return pgcd(b, a-b); }
    else { return pgcd (a, b-a); }
}
