#include <iostream>
#include <string>
using namespace std;
int main() {
  int array[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {3, 4, 6, 2}, {3, 5, 2, 6}};
  cout << sum_diagonal(array) << endl;
}
