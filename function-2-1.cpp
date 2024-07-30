#include <iostream>
#include <string>

using namespace std;
void print_binary_str(std::string decimal_number) {
  int number = stoi(decimal_number);
  int *array = new int[number];
  int weishu = 0;
  while (number > 0) {
    array[weishu] = number % 2;
    number = number / 2;
    weishu++;
  }
  for (int i = weishu - 1; i >= 0; i--) {
    cout << array[i];
  }
  delete[] array; // Remember to free the allocated memory
}
