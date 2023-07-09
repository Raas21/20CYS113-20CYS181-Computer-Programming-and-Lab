#include <stdio.h>
// This code prints a pyramid pattern with ASCII characters from A to Z.
// The number of rows in the pyramid is equal to the value of the variable `n`.
int main() {
  int n;
  // Read the number of rows from the user.
  scanf("%d", &n);
  // Iterate from `n` down to 1, printing a row of spaces and ASCII characters for each row.
  for (int i = n; i > 1; i--) {
    // Print `2*(n-i)` spaces.
    for (int j = 0; j < 2 * (n - i); j++) {
      printf(" ");
    }
    // Print `2*(i-1)` ASCII characters, increasing from D to Z.
    for (int k = 0; k <= 2 * (i - 1); k++) {
      printf("%c ", 68 + k);
    }
    // Print a newline character.
    printf("\n");
  }
  // Iterate from 1 to `n`, printing a row of spaces and ASCII characters for each row.
  for (int i = 1; i <= n; i++) {
    // Print `2*(n-i)` spaces.
    for (int j = 0; j < 2 * (n - i); j++) {
      printf(" ");
    }
    // Print `2*(i-1)` ASCII characters, increasing from D to Z.
    for (int k = 0; k <= 2 * (i - 1); k++) {
      printf("%c ", 68+ k);
    }
    // Print a newline character.
    printf("\n");
  }
  return 0;
}
