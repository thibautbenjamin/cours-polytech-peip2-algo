#include <iostream>
using namespace std;

// Entrées: Un entier n >= 1
// Sortie: Un booléen mystère
bool mystere (int n){
  int i = 2;
  bool r = true;
  while (i < n && r){
    if (n%i == 0) {
      r = false;
    }
    i = i+1;
  }
  return r;
}

int main (){
  cout << "15: " << mystere(15) << " 17: " << mystere(17);
  return 0;
}
