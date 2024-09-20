#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
  int n1;
  cin >> n1;

  for (int i = 1; i < 10; i += 1) {
	cout << n1 << " * " << i << " = " << n1 * i << endl;
  }

  return EXIT_SUCCESS;
}
