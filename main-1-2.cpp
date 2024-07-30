#include <iostream>
#include <string>
using namespace std;
extern bool is_identity(int array[10][10]);
int main() {
  int array[10][10] = {{1, 2, 3, 4}, {5, 6, 7, 8},  {3, 4, 6, 2}, {3, 5, 2, 6},
                       {3, 4, 6, 1}, {4, 5, 76, 3}, {4, 5, 6, 3}, {4, 5, 6, 3},
                       {4, 5, 6, 3}, {4, 5, 6, 3}};
  bool result = is_identity(array);
}
