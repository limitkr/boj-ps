#include <iostream>

using std::cout;
using std::cin;

int main() {
  int a, b, c;

  cin >> a >> b >> c;

  cout << (a + b) % c << "\n";
  cout << ((a % c) + (b % c)) % c << "\n";
  cout << (a * b) % c << "\n";
  cout << ((a % c) * (b % c)) % c << "\n";

  return EXIT_SUCCESS;
}