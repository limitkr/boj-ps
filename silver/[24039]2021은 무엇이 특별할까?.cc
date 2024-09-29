/**
 * @file [S5]2021은 무엇이 특별할까?.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-29 14:26:58
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
#define ar array

// No Pre-Generate Version
// https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html
vt<char> sieve(ll L, ll R) {
  vt<char> isPrime(R - L + 1, true);
  ll lim = sqrt(R);
  for (ll i = 2; i <= lim; i++) {
    for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
      isPrime[j - L] = false;
  }
  if (L == 1)
    isPrime[0] = false;
  return isPrime;
}

int N;
#define MAX 104

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  auto p = sieve(1, MAX);
  vt<int> primes;
  for (int i = 0; i < MAX; i++) {
    if (p[i])
      primes.emplace_back(i + 1);
  }
  int idx = 0;
  while (N >= primes[idx] * primes[idx + 1]) {
    idx++;
  }
  cout << primes[idx] * primes[idx + 1];
  return 0;
}