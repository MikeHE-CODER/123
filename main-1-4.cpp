#include <iostream>
#include <string>
extern void print_scaled(int array[3][3], int scale);
using namespace std;
int main() {
  int array[3][3] = {{1, 2, 3}, {5, 7, 8}, {3, 4, 2}};
  print_scaled(array, 4);
}
