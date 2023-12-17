#include <iostream>

int main() {
  // COnverting miles into kilometers
  double mile;
  double km;
  std::cin >> mile;
  km = mile * 1.6;
  std::cout<< "The " << mile << " miles are " << km << " kilometers\n";
}