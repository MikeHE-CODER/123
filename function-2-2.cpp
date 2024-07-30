#include <iostream>
#include <string>
using namespace std;
int binary_to_int(int binary_digits[], int number_of_digits) {
  int result = 0;
  int beishu = 1;
  for (int i = number_of_digits - 1; i > -1; i--) {
    result += binary_digits[i] * beishu;
    beishu *= 2;
  }
  return result;
}
