#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
	int n1, n2;
	cin >> n1 >> n2;

	if (n1 > n2) cout << ">" << endl;
	else if (n1 < n2) cout << "<" << endl;
	else cout << "==" << endl;

	return EXIT_SUCCESS;
}