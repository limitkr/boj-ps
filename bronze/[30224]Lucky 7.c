main;__libc_start_main() {
    char x[20];
	int n = read(0, x, 19);
	x[n] = '\0';
	int res = 0, i = 0, flag = 0;
	while (1) {
	    char ch = x[i++];
	    if (ch == ' ' || ch == '\n' || ch == '\0') break;
	    res = res * 10 + ch - '0';
	    if (ch - '0' == 7) flag = 1;
	}
	if (flag) {
		if (res % 7 == 0) write(1, "3\n", 2);
		else write(1, "2\n", 2);
	} else {
		if (res % 7 == 0) write(1, "1\n", 2);
		else write(1, "0\n", 2);
	}
	_exit(0);
}