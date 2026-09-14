#include <stdio.h>
#include <stdlib.h>

int main()
{

  int32_t a = 10;
  int64_t b = 10;

  printf("size a : %zu\n", sizeof(a));
  printf("size b : %zu\n", sizeof(b));

  int32_t *c = &a;
  int64_t *d = &b;

  printf("size c: %zu\n", sizeof(c));
  printf("size d: %zu\n", sizeof(d));

  printf("adress of c: 0x%p\n", c);
  printf("adress of d: 0x%p\n", d);

  return 0;
}