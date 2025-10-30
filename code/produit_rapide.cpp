#include <iostream>
using namespace std;

// Entrées: Deux entiers x et y
// Sortie: Le produit des deux entrées
int produit (int x , int y){
  return x * y;
}

int main (){
  int x = 42;
  int y = 123456789;
  cout << "le produit de " << x << " et " << y << " est " << produit(x,y);
  return 0;
}
