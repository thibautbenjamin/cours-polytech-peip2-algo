int fibo (int n){
  //Contrat
    if (n <= 1){ return n; }
    return fibo(n-1) + fibo (n-2);
}
