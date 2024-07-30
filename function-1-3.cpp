#include <iostream>
#include <string>

using namespace std;

void count_digits(int array[4][4]) {
  for (int m = 0; m < 10; m++) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        if (array[i][j] == m) {
          count++;
        }
      }
    }
    cout<<m<<":"<<count<<";";
  }
}
