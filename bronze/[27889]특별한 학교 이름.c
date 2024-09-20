char x[4];
main;__libc_start_main() {
  read(0, x, 4);
  if (x[0] == 'N') write(1, "North London Collegiate School", 30);
  else if (x[0] == 'B') write(1, "Branksome Hall Asia", 19);
  else if (x[0] == 'K') write(1, "Korea International School", 26);
  else write(1, "St. Johnsbury Academy", 21);
  _exit(0);
}