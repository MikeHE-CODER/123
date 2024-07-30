#include <iostream>
#include <string>
using namespace std;
extern void print_summed(int array1[3][3],int array2[3][3]) ;
int main() {
  int array1[3][3] = {{1, 2, 3}, {5, 7, 8}, {3, 4, 2}};
  int array2[3][3] = {{1, 2, 3}, {5, 7, 8}, {3, 4, 2}};
  print_summed(array1,array2);
}
