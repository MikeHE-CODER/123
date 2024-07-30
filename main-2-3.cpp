#include <iostream>
#include <string>
using namespace std;
extern int sum_array_elements(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length); 
int main() {
  int a[5] = {1, 1, 1, 1, 1};
  cout << sum_array_element(a, 5);
}
