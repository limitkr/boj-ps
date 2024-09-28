/**
 * @file 틱택토_이기기.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-10 11:39:17
 */
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/extc++.h>
#include <bits/stdc++.h>

using namespace __gnu_pbds;
using namespace std;

using ll = long long;
using ld = long double;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int T;
vt<vt<char>> board(3, vt<char>(3));
char piece;

pair<int, int> solve() {
  auto check = [&](vt<char> line) {
    if (ranges::count(line, piece) == 2 && ranges::count(line, '-') == 1) {
      auto space = ranges::find(line, '-');
      int idx = distance(line.begin(), space);
      return idx;
    }
    return -1;
  };
  for (int i = 0; i < 3; i++) {
    if (auto row = check(board[i]); row != -1)
      return {i, row};

    vt<char> column = {board[0][i], board[1][i], board[2][i]};
    if (auto col = check(column); col != -1)
      return {col, i};

    vt<char> dia1 = {board[0][0], board[1][1], board[2][2]};
    vt<char> dia2 = {board[0][2], board[1][1], board[2][0]};

    if (auto d1 = check(dia1); d1 != -1)
      return {d1, d1};
    if (auto d2 = check(dia2); d2 != -1)
      return {d2, 2 - d2};
  }
}

auto main() -> int32_t {
  FAST_IO;
  cin >> T;
  int tt = 1;
  while (T--) {
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++)
        cin >> board[i][j];
    cin >> piece;

    auto res = solve();
    cout << "Case " << tt << ":" << endl;
    int col = res.first;
    int row = res.second;
    board[col][row] = piece;
    for (auto c : board) {
      for (auto ch : c)
        cout << ch;
      cout << endl;
    }
    tt++;
  }
  return 0;
}