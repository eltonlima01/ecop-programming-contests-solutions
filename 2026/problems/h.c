#include <stdio.h>

static inline int i(const char* chr) {
  switch (*(chr + 2)) {
    case 'd': return 0;
    case 'p': return 1;
    case 's': return 2;
    case 'g': return 3;
    default : return 4;
  }
}

int main(void) {
  const char* chr[5][5] = {
    {"empate", "sheldon", "rajesh", "rajesh", "sheldon"},
    {"rajesh", "empate", "sheldon", "sheldon", "rajesh"},
    {"sheldon", "rajesh", "empate", "rajesh", "sheldon"},
    {"sheldon", "rajesh", "sheldon", "empate", "rajesh"},
    {"rajesh", "sheldon", "rajesh", "sheldon", "empate"}
  };

  int c;
  scanf("%d", &c);

  char rajesh[8], sheldon[8];

  while (c--) {
    scanf("%s %s\n", rajesh, sheldon);
    puts(chr[i(rajesh)][i(sheldon)]);
  }

  return 0;
}