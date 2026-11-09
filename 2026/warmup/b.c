#include <stdio.h>

int main(void) {
  unsigned int a, z;

  while(scanf("%u %u", &a, &z) != EOF) {
    printf("%u\n", a ^ z);
  }

  return 0;
}