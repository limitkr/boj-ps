#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
  int n1, n2;
  cin >> n1 >> n2;

  double res = (double)n1 / (double)n2;

  cout.precision(10);
  cout << res << endl;

  return EXIT_SUCCESS;
}
