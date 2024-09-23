#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

vt<string> temp;
string S;
map<int, char> table = {
  {0, ' '},
  {27, '\''},
  {28, ','},
  {29, '-'},
  {30, '.'},
  {31, '?'}
};

void init() {
  for (int i = 0; i < 26; i++) {
    table[i + 1] = static_cast<char>(i + 65);
  }
}

inline void add_padding(vt<int> &res) {
  while (res.size() % 5 != 0) res.emplace_back(0);
}

int32_t main() {
  FAST_IO;
  init();
  while (getline(cin, S)) {
    if (S == "#") break;
    if (S == "*") {
      vt<int> res;
      for (auto &str : temp) {
        int space_cnt = 0;
        for (auto ch : str) {
          if (ch == ' ') space_cnt++;
          else {
            if (space_cnt) res.emplace_back(space_cnt % 2 == 0 ? 1 : 0);
            space_cnt = 0;
          }
        }
      }
      add_padding(res);
      int total = 0;
      int base = 16;
      for (int i = 0; i < res.size(); i++) {
        int curr = res[i];
        total += base * curr;
        base /= 2;
        if ((i + 1) % 5 == 0) {
          cout << table[total];
          total = 0;
          base = 16;
        }
      }
      cout << endl;
      temp.clear();
    } else temp.emplace_back(S);
  }
  return 0;
}
