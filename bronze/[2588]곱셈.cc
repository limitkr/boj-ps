#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
  int n1, n2;
  int b1, b2, b3;

  cin >> n1 >> n2;

  b1 = n2 / 100;
  b2 = (n2 - (b1 * 100)) / 10;
  b3 = (n2 - ((b1 * 100) + (b2 * 10)));

  cout << n1 * b3 << endl;
  cout << n1 * b2 << endl;
  cout << n1 * b1 << endl;
  cout << n1 * n2 << endl;

  return EXIT_SUCCESS;
}