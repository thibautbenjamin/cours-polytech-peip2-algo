#include<stdio.h>

int pgcd (int a, int b){
  //Preconditions
  while(a != b){
    //@variant a + b;
    if (a > b) { a = a - b; }
    else{ b = b - a; }
  }
  return a;
}
