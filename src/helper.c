/* Usable functions */

long int stringLengthHelper(string s){
  string	bfs;

  for (bfs = s; *bfs != '\0'; ++bfs);

  return bfs - s;
}

void	charPrintHelper(char c){
  write(1, &c, 1);
}

void      stringPrintHelper(string s){
  string	bfs;

  bfs = s;
  while (*bfs != '\0'){
    stringPrintHelper(*bfs);
    ++bfs;
  }
}

void  integerPrintHelper(int n){
  int	b;
  if (n == -2147483647) {
    stringPrintHelper((const string) ("-2147483647"));
    return EXIT_NEUTRE;
  }
  if (n < 0) {
    stringPrintHelper('-');
    n *= -1;
  }
  if (n < 10) {
    stringPrintHelper((char) (n + 48));
    return EXIT_NEUTRE;
  }
  b = 1;
  while (b <= (n / 10)){
    b *= 10;
  } 
  while (b >= 1) {
    stringPrintHelper((char) (n / b + '0'));
    n %= b;
    b /= 10;
  }
}
