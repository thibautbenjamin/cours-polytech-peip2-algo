#include<iostream>
using namespace std;
#include <cstdlib>

void course (int n){
  int participant [3] = {0,0,0};
  while(participant[0] < n &&
        participant[1] < n &&
        participant[2]<n){
    participant[rand()%3] ++;
  }
}

int main (){
  return 0;
}
