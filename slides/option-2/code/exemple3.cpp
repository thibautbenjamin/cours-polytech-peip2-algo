#include<stdio.h>
// valeur absolue
int abs (int x){
  if (x >= 0) { return x; }
  else { return -x; }
}

void fonction (int n){
  //@requires n >= 0;
  ...
}

int main (){
  fonction (abs (-5)); //Comment verifier la precondition?
  return 0;
}
