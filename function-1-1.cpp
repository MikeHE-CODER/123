#include <iostream>
#include <string>

using namespace std;

int sum_diagonal(int array[4][4]) {
  int total = 0;
  for (int i = 0; i < 4; i++) {
      total = total + array[i][i];   
  }
  return total;
}

