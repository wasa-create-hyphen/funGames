#include <iostream>

int main() {
  std::cout << "Find the missing number!\n";
  int x = 0;
  while(x != 72) {
    x += 2;
    std::cout << x << "\n";
  }
  std::cout << 74 << "\n";
  x += 1;
  while(x != 100) {
    x += 1;
    std::cout << x << "\n";
  }
}
