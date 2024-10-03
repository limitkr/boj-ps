// low-level read, write reference:
// https://blog.naver.com/jinhan814/222340927259
#define SZ (1 << 14)

#define read_int(n) { \
  int sign = 1; \
  while (*p < '0' || *p > '9') { \
    if (*p == '-') { sign = -1; p++; } \
    else if (*p == '+') { p++; } \
    else p++; \
  } \
  n = 0; \
  while (*p >= '0' && *p <= '9') { \
    n = 10 * n + (*p - '0'); \
    p++; \
  } \
  n *= sign; \
}
  
#define write_int(n) { \
  int sz = get_size(n); int m = n; \
  for (int j = sz; j --> 0; m /= 10 ) w[i + j] = m % 10 | 48; \
  i += sz; }
  
int get_size(int n) {
  int sz = 1;
  for (; n >= 10; n /= 10) sz++;
  return sz;
}
  
char x[4];
__libc_start_main() {
  char r[SZ], w[SZ], *p = r; syscall(0, 0, r, SZ);
  int N = 0; read_int(N);
  int res = 0;
  int i = 0;
  while (N--) {
    int x = 0;
    read_int(x);
    res += x;
  }
  if (res < 0) write(1, "Left", 4);
  else if (res == 0) write(1, "Stay", 4);
  else write(1, "Right", 5);
  _exit(0);
} main;