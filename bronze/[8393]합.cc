#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
  int n1, res = 0;
  cin >> n1;
  for (int i = 1; i < n1 + 1; i += 1) {
	res += i;
  }
  cout << res << endl;

  return EXIT_SUCCESS;
}
