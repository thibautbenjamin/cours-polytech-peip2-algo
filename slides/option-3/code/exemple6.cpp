int factorielle (int n){
    //@requires n>=0;
    //@variant n;
    if (n == 0) { return 1; }
    return n * factorielle (n-1);
}
