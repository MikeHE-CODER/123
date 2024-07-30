#include <iostream>
#include <string>
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
using namespace std;
int main() {
  int a[5] = {1, 2, 6, -1, 1};
  cout << sum_min_max(a, 5);
}
