#include <iostream>

using namespace std;

int a, b;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  while (cin >> a >> b) {
	cout << a + b << "\n";
  }
}