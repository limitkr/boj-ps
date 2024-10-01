/**
 * @file main.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-10-01 02:20:41
 */
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int N;

string make(int i) {
  string line;
  int t = N - i;
  for (int i = 0; i < t; i++)
    line.append("____");
  return line;
}

void solve(const int n) {
  const string s = make(n);
  if (n == 0) {
    cout << s << "\"재귀함수가 뭔가요?\"" << endl;
    cout << s << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << endl;
    cout << s << "라고 답변하였지." << endl;
    return;
  }
  cout << s << "\"재귀함수가 뭔가요?\"" << endl;
  cout << s
       << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 "
          "선인이 있었어."
       << endl;
  cout << s
       << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 "
          "대답해 주었지."
       << endl;
  cout << s
       << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 "
          "선비가 찾아와서 물었어.\""
       << endl;
  solve(n - 1);
  cout << s << ""
          "라고 답변하였지."
          ""
       << endl;
}

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << endl;
  solve(N);
  return 0;
}