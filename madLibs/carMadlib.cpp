#include <iostream>

int main() {
  std::string noun;
  std::string verb;
  std::string adjective;
  std::cout << "Car mad libs\n";
  std::cout << "Enter a noun: ";
  std::cin >> noun;
  std::cout << "Enter a verb: ";
  std::cin >> verb;
  std::cout << "Enter a adjective: ";
  std::cin >> adjective;
  std::cout << "Your " << adjective << " " << noun << " is " << verb << "\n";
}
