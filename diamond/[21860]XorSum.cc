/**
 * 21860.cpp
 * @author limitkr
 * @date 25. 2. 7 13:30:14
 */
#pragma GCC optimize("O3,unroll-loops")
#include <bits/extc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define BLOCK_SIZE 32
using ll = long long;

constexpr bool has_bits(const int x, const int b) { return (x & (1 << b)) != 0; }

auto main() -> int32_t {
  FAST_IO;
  int N;
  cin >> N;
  vector<int> v(N);
  for (auto &n : v)
    cin >> n;

  int ans = 0;
  vector<int> c(N);

  for (int j = 0; j < BLOCK_SIZE - 1; j++) {
    int b = 1 << j;
    if (j > 0) {
      auto nt = [j](const int x) { return !has_bits(x, j - 1); };
      vector<int> pat;

      ranges::copy_if(v, back_inserter(pat), nt);
      ranges::copy_if(v, back_inserter(pat), [nt](const int x) { return !nt(x); });
      v = move(pat);

      for (int i = 0; i < N; i++)
        c[i] = v[i] % b;
    } else {
      for (int i = 0; i < N; i++)
        c[i] = v[i] % b;
    }

    auto cnt = ranges::count_if(v, [b](const int x) { return (x & b) != 0; });

    int k = 0;
    int t2 = N - 1;
    for (int t1 = 0; t1 < N; t1++) {
      while (t2 >= 0 && c[t1] + c[t2] >= b)
        t2--;
      k += N - 1 - t2;
    }

    for (int i = 0; i < N; i++) {
      if (2 * c[i] >= b)
        k++;
    }

    if (((k / 2) + cnt * (N - cnt)) & 1)
      ans += b;
  }

  cout << ans;
  return 0;
}
