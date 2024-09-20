#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	const time_t timer = time(nullptr);
	const tm* t = localtime(&timer);

	const int year = t->tm_year + 1900;
	const int month = t->tm_mon + 1;
	const int day = t->tm_mday;

	cout << year << "-" << month << "-" << day << "\n";

	return 0;
}
