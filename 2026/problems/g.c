#include <stdio.h>

int main(void) {
  const char* string = "LIFE IS NOT A PROBLEM TO BE SOLVED";
  const char* chr = string;

  int n;
  scanf("%d", &n);

  while (n--) {
    putchar(*(chr++));
  }

  putchar('\n');

  return 0;
}