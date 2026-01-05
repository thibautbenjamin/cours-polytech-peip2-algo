// valeur absolue
int abs (int x){
  //@ensures  result >= 0;
  if (x >= 0) { return x; }
  else { return -x; }
}
