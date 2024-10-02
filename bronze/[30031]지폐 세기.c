// low-level read, write reference:
// https://blog.naver.com/jinhan814/222340927259
#define SZ (1 << 14)
#define read_int(n) { \
  while (!(*p & 16)) p++; \
  while (*p & 16) n = 10 * n + (*p++ & 15); }
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
  int a = 0, b = 0, c = 0, d = 0, i = 0;
  while (N--) {
    int x = 0, _x = 0;
    read_int(x); read_int(_x);
    if (x == 136) a++;
    else if (x == 142) b++;
    else if (x == 148) c++;
    else if (x == 154) d++;
  }
  int res = a * 1000 + b * 5000 + c * 10000 + d * 50000;
  write_int(res); w[i++] = '\n';
  syscall(1, 1, w, i);
  _exit(0);
} main;