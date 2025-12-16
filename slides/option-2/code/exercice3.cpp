#include<stdio.h>

void afficherEnK (int n, int tab[], int k){
  //Precondition?
  for (int i = 0; i < n; i = i + k){
      //Variant?
      printf("%i ", tab[i]);
  }
}
