#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::cin;


int get_match_count(const int*);

int main() {
  int d1, d2, d3;
  cin >> d1 >> d2 >> d3;

  int dice_arr[] = {d1, d2, d3};
  std::sort(dice_arr, dice_arr + 3);

  int count = get_match_count(dice_arr);
  int price = 0;

  if (count == 3) {
	price = 10000 + d1 * 1000;
  } else if (count == 2) {
	price = 1000 + dice_arr[1] * 100;
  } else price = dice_arr[2] * 100;

  cout << price << endl;

  return EXIT_SUCCESS;
}

int get_match_count(const int* dice_arr) {
  int count = 1;

  for (int i = 0; i < 2; i += 1) {
	if (dice_arr[i] == dice_arr[i+1]) count += 1;
  }

  return count;
}