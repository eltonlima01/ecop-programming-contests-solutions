#include <stdio.h>

int main(void) {
  int l;

  while (scanf("%d", &l) != EOF) {
    int faster = 1;
    int v;
    
    while (l--) {
      scanf("%d", &v);

      faster = v > faster ? v : faster;
    }

    if (faster < 10) {
      puts("1");
    } else if (faster < 20) {
      puts("2");
    } else {
      puts("3");
    }
  }

  return 0;
}