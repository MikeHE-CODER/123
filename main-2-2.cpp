#include <iostream>
#include <string>
using namespace std;
extern int binary_to_int(int binary_digits[], int number_of_digits);
int main() {
  int a[5] = {1, 1, 1, 1, 1};
  cout << binary_to_int(a, 5);
}
