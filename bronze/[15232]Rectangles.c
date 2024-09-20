main;__libc_start_main() {
  char x[6];
  read(0, x, 6);
  int n[2] = {}, i = 0;
  for (int idx = 0; idx < 2; idx++) {
    while (1) {
      char ch = x[i++];
      if (ch == ' ' || ch == '\n')
        break;
      n[idx] = 10 * n[idx] + ch - '0';
    }
  }
  for (int i = 0; i < n[0]; i++) {
    for (int j = 0; j < n[1]; j++)
      write(1, "*", 1);
    write(1, "\n", 1);
  }
  _exit(0);
}