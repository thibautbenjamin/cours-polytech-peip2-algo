int additionBete (int a, int b){
  //@requires b>0;
  while (b != 0){
    //@variant b;
    //@invariant b>=0;
    a = a + 1;
    b = b - 1;
  }
  return a;
}
