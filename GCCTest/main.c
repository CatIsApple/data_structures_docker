#include <stdio.h>

int main()
{
    __int8_t a = 10;
    int b = a;
    char *c = &a;
    printf("a: %d\n", a);
    printf("b : %d\n", b);
    printf("c : Ox%p\n", c);
    // printf("size: %zu\n", sizeof(a));
    // printf("adress: 0x%p\n", &a);


    // *c = 20;
    
    // printf("a: %d\n", a);
    // printf("b : %d\n", b);
    // printf("c : 0x%p\n", c);


    printf("a: %zu\n", sizeof(a));
    printf("b : %zu\n", sizeof(b));
    printf("c : %zu\n", sizeof(c));
}