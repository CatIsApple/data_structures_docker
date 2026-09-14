#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int8_t a = 100;
  int8_t* a_ptr8 = &a;
  int64_t* a_ptr64 = (int64_t*)a_ptr8;
  printf("a_ptr8 0x%p, %zu\n", a_ptr8, sizeof(a_ptr8));
  printf("a_ptr64 0x%p, %zu\n", a_ptr64, sizeof(a_ptr64));

  int32_t data32 = 65535;
  u_int16_t data16 = data32;
  printf("%d",data16);

  return 0;
}