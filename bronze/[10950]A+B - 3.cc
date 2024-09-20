#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main() {
  int T, n1, n2;
  cin >> T;

  for (int i = 0; i < T; i += 1) {
	cin >> n1 >> n2;
	cout << n1 + n2 << endl;
  }

  return EXIT_SUCCESS;
}
