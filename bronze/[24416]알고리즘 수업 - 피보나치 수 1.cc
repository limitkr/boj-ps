#include <bits/stdc++.h>
using namespace std;

int N, cnt = 0, dyn_cnt = 0, arr[40];

int fib(int n) {
  if (n == 1 || n == 2) {
    cnt++;
    return 1;
  }
  else return fib(n - 1) + fib(n - 2);
}

void fibonacci(int n) {
  arr[1] = 1, arr[2] = 1;
  for (int i = 3; i <= n; i++) {
    dyn_cnt++;
    arr[i] = arr[i - 1] + arr[i - 2];
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  fib(N);
  fibonacci(N);
  cout << cnt << " " << dyn_cnt << "\n";

  return EXIT_SUCCESS;
}