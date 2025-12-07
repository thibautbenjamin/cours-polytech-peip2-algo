#include<iostream>
using namespace std;

void fusion (int tab[], int gauche, int milieu, int droite){
  int annexe [droite - gauche];
  int i = gauche, j = milieu, k = 0;
    while (i < milieu && j < droite) {
        if (tab[i] <= tab[j]) {
            annexe[k] = tab[i]; i++; k++;
        }
        else {
            annexe[k] = tab[j]; j++; k++;
        }
    } // reste de la fonction de fusion
}
