#include <iostream>
#include <string>

using namespace std;
extern void print_binary_str(std::string decimal_number);
int main() {
  string a = "31";
  print_binary_str(a);
}
