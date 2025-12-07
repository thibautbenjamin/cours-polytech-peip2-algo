#include<iostream>
using namespace std;;

void sommesPartielles(int n, int tab[]){
  // Entrees: un entier n>0 et un tableau de taille n
  // Sorties: affiche les sommes partielles du tableau
  for(int i = 0; i < n; i++){
    int somme = 0;
    for (int j = 0; j <= i; j++){
      somme = somme + tab[j];
    }
    cout << somme << " ";
  }
}

void toutesSommes (int n, int tab[], int curr){
  if (n == 0){
    cout << curr << " ";
  }
  else{
    toutesSommes (n-1, tab, curr);
    toutesSommes (n-1, tab, curr + tab[n-1]);
  }
}

void toutesValeurs (int n, int tab[], int curr){
  if (n == 0){
    cout << curr << " ";
  }
  else{
    toutesValeurs (n-1, tab, curr);
    toutesValeurs (n-1, tab, curr + tab[n-1]);
    toutesValeurs (n-1, tab, curr - tab[n-1]);
  }
}


int main (){
  int tab [5] = {1,3,4,5,7};
  sommesPartielles(5,tab);
  cout << "\n";
  toutesSommes(5,tab,0);
  cout << "\n";
  toutesValeurs(5,tab,0);
}
