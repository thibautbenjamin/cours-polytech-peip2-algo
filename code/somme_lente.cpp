#include <iostream>
using namespace std;

// Entrées: Deux entiers x et y positifs
// Sortie: La somme des deux entrées
int somme (int x , int y){
  while (y  > 0){
    x = x + 1;
    y = y - 1;
  }
  return x;
}

int main (){
  int x = 42;
  int y = 123456789;
  cout << "la somme de " << x << " et " << y << " est " << somme(x,y);
  return 0;
}
