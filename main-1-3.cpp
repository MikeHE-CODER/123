#include <iostream>
#include <string>
extern void count_digits(int array[4][4]);
using namespace std;
int main() {
    int array[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {3, 4, 6, 2}, {3, 5, 2, 6}};
    count_digits(array);
  
}
