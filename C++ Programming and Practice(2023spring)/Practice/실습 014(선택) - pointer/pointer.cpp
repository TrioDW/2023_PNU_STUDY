#include "pointer.h"

void update(int* a, int* b) {
  int temp1 = *a + *b;
  int temp2 = *a - *b;
  *a = temp1;
  *b = temp2;
}
