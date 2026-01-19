#include <stdio.h>

int main() {
  int c, blanks;
  // printf("%d %6d", getchar() != EOF, EOF);
  blanks = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' && blanks > 0) {
      blanks++;
    } else if (c == ' ' && blanks == 0) {
      putchar(c);
      blanks++;
    } else {
      blanks = 0;
      putchar(c);
    }
  }
  return 0;
}
