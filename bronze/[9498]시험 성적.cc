#include <iostream>

using std::cout;
using std::endl;
using std::cin;

char calculate(int);

int main() {
  int n1;
  char res;

  cin >> n1;

  res = calculate(n1);
  cout << res << endl;

  return EXIT_SUCCESS;
}

char calculate(int score) {
  if (90 <= score) return 'A';
  else if (80 <= score) return 'B';
  else if (70 <= score) return 'C';
  else if (60 <= score) return 'D';
  else return 'F';

}