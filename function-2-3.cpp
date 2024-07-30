#include <iostream>
#include <string>
using namespace std;
bool is_palindrome(int integers[], int length) {
  for (int i = 0; i < length / 2; i++) {
    if (integers[i] != integers[length - i - 1]) {
      return false;
    }
  }
  return true;
}
int sum_if_palindrome(int integers[], int length) {
  int result = 0;
  for (int i = 0; i < length; i++) {
    result += integers[i];
  }
  return result;
}
int sum_array_element(int integers[], int length) {
  int isfou = is_palindrome(integers, length);
  if (isfou == true) {
    return sum_if_palindrome(integers, length);
  } else {
    return -2;
  }
}
