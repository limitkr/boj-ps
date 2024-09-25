#include <bits/stdc++.h>
using namespace std;

int x, y, w, h;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> x >> y >> w >> h;
  int arr[4] = { x, y , w - x, h - y };
  sort(arr, arr + 4);
  cout << arr[0] << "\n";
}