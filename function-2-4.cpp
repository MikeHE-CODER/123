#include <iostream>
#include <string>
using namespace std;
int array_min(int integers[], int length) {
  if (length <= 0) {
    return false;
  }
  int min = integers[0];
  for (int i = 1; i < length; i++) {
    if (integers[i] < min) {
      min = integers[i];
    }
  }
  return min;
}
int array_max(int integers[], int length) {
  if (length <= 0) {
    return false;
  }
  int max = integers[0];
  for (int i = 1; i < length; i++) {
    if (integers[i] > max) {
      max = integers[i];
    }
  }
  return max;
}
