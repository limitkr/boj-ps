#include <bits/stdc++.h>
using namespace std;

int T, X;
string OP;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> T;
	int *arr = new int[T];
	int size = 0;

	while (T--) {
		cin >> OP;
		if (OP == "push") {
			cin >> X;
			arr[size] = X;
			size++;
		} else if (OP == "pop") {
			if (size > 0) {
				cout << arr[size - 1] << "\n";
				arr[size - 1] = NULL;
				size--;
			} else cout << -1 << "\n";
		} else if (OP == "size") {
			cout << size << "\n";
		} else if (OP == "empty") {
			if (size == 0) cout << 1 << "\n";
			else cout << 0 << "\n";
		} else if (OP == "top") {
			if (size > 0) cout << arr[size - 1] << "\n";
			else cout << -1 << "\n";
		}
	}
	delete arr;

	return EXIT_SUCCESS;
}
