//1. Write a program in C++ to print a welcome text in a separate line.
#include <iostream>
using namespace std;

int main() {
  cout << "**** Code for continue ****\n";
  for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}

cout << "\n**** Code for break ****\n" ;
  for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
}


  return 0;
}


