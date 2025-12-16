#include<stdio.h>

int pgcd (int a, int b){
  //Postconditions
  while(a != b){
    if (a > b) { a = a - b; }
    else{ b = b - a; }
  }
  return a;
}
