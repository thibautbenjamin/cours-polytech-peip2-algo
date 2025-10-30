#include <iostream>
using namespace std;

// Entrées: Deux entiers x et y positifs
// Sortie: Le produit des deux entrées
int produit (int x , int y){
  int result;
  while (y  > 0){
    result = result + x;
    y = y - 1;
  }
  return result;
}

int main (){
  int x = 42;
  int y = 123456789;
  cout << "le produit de " << x << " et " << y << " est " << produit(x,y);
  return 0;
}
