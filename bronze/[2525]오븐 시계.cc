#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
  int h, m;
  int cooking_time;
  cin >> h >> m;
  cin >> cooking_time;

  int total_mins = h * 60 + m + cooking_time;
  h = 0;

  while (total_mins >= 60) {
	h += 1;
	if (h == 24) h = 0;
	total_mins -= 60;
  }
  cout << h << " " << total_mins << endl;

  return EXIT_SUCCESS;
}