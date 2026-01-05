int pgcd (int a, int b){
    //@requires a > 0;
    //@requires b > 0;
    //@variant a + b;
    if (a == b){ return a; }
    else if (a > b){ return pgcd(b, a-b); }
    else { return pgcd (a, b-a); }
}
