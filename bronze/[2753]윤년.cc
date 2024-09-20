#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main() {
  int n1;

  cin >> n1;

  if (n1 % 4 == 0 && (n1 % 100 != 0 || n1 % 400 == 0)) {
	cout << 1 << endl;
  } else {
	cout << 0 << endl;
  }

  return EXIT_SUCCESS;
}