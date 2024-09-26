#include <bits/stdc++.h>
using namespace std;

#define vec vector

vec<int> arr;
int N;

int get_sum(int n) {
  int res = 0;
  while (n > 0) {
    res += n % 10;
    n /= 10;
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  for (int i = 1; i < N + 1; i++) {
    int res = get_sum(i) + i;
    if (res == N) {
      cout << i;
      break;
    }
    if (i == N) {
      cout << 0;
    }
  }
  return EXIT_SUCCESS;
}
