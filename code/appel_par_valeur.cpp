#include <iostream>
using namespace std;

void swap (int x, int y){
  int z = x;
  x = y;
  y = z;
}

int main (){
  int a = 0;
  int b = 1;
  swap (a,b);
  cout << "a = " << a << " b = " << b;
  return 0;
}
