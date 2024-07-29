#include <iostream>
#include <string>

using namespace std;

int sum_diagonal(int array[4][4]) {
  int total = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      total = total + array[i][j];
    }
  }
  return total;
}
