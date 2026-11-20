#include <stdio.h>

int main(void) {
  int t;
  scanf("%d\n", &t);

  while (t--) {
    int n;
    scanf("%d\n", &n);

    int m[n];
    int o = 0;

    for (int i = 0; i < n; ++i) {
      switch(getchar()) {
        case 'L': {
          scanf("%*s\n");

          m[i] = -1;
        } break;

        case 'R': {
          scanf("%*s\n");

          m[i] = 1;
        } break;

        case 'S': {
          int j;
          scanf("AME AS %d\n", &j);

          m[i] = m[j - 1];
        } break;
      }

      o += m[i];
    }

    printf("%d\n", o);
  }

  return 0;
}