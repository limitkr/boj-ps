#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
  int h, m;
  cin >> h >> m;

  int mins = h * 60 + m;
  int res = mins - 45;

  h = 0;

  if (mins < 45) {
	res += 24 * 60;
  }

  while (res >= 60) {
	h += 1;
	res -= 60;
  }
  cout << h << " " << res << endl;

  return EXIT_SUCCESS;
}