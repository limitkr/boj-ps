#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int get_quadrant(int, int);

int main() {
  int n1, n2;
  cin >> n1 >> n2;

  int res = get_quadrant(n1, n2);
  cout << res << endl;

  return EXIT_SUCCESS;
}

int get_quadrant(int n1, int n2) {
  if (n1 > 0 && n2 > 0) return 1;
  if (n1 < 0 && n2 > 0) return 2;
  if (n1 < 0 && n2 < 0) return 3;
  else return 4;
}