#include <stdio.h>

struct Example
{
    char a;   // Size: 1 byte, Alignment: 1 byte
    int b;    // Size: 4 bytes, Alignment: 4 bytes
    double c; // Size: 8 bytes, Alignment: 8 bytes
    char d;   // Size: 1 byte, Alignment: 1 byte
};

int main()
{
    struct Example ex;

    printf("Size of struct Example: %zu bytes\n", sizeof(struct Example));
    printf("Address of 'a': %p\n", &ex.a);
    printf("Address of 'b': %p\n", &ex.b);
    printf("Address of 'c': %p\n", &ex.c);
    printf("Address of 'c': %p\n", &ex.d);

    return 0;
}
