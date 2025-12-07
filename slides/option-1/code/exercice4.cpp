#include<iostream>
using namespace std;

void nombresTriangulaires(int n) {
  int tr = 0, i = 1;
    while (tr < n) {
        tr = tr + i;
        i++;
        cout << i << " ";
    }
}

int main (){
  nombresTriangulaires (120);
  return 0;
}
