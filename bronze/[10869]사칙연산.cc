#include <iostream>

using std::cout;
using std::cin;

int main() {
  int n1, n2;

  cin >> n1 >> n2;

  cout << n1 + n2 << "\n";
  cout << n1 - n2 << "\n";
  cout << n1 * n2 << "\n";
  cout << n1 / n2 << "\n";
  cout << n1 % n2 << "\n";

  return EXIT_SUCCESS;
}