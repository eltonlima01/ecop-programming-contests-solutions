#include <stdio.h>

int main(void) {
  double salary, total;

  scanf("%*s %lf %lf", &salary, &total);

  printf("TOTAL = R$ %.2lf\n", salary + (total * 0.15));

  return 0;
}