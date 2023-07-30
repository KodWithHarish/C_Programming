#include <stdio.h>

int globalVariable = 42; // External linkage by default

// Function with external linkage (prototyped in a header file)
extern void myFunction(); // Declared with 'extern' keyword

int main()
{
    myFunction(); // Can be used even if the definition is in another file
    return 0;
}

// gcc -o extern file1.c file2.c
