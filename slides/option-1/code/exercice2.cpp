#include<iostream>
using namespace std;

void sommesPartielles(int n, int tab[]){
  for(int i = 0; i < n; i++){
    int somme = 0;
    for (int j = 0; j <= i; j++){
      somme = somme + tab[j];
    }
    cout << somme << " ";
  }
}
