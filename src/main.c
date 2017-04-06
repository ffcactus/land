#include <stdio.h>
#include <stdlib.h>
#include <config.h>

int main(void)
{
    puts("Hello World!");
    puts("This is " PACKAGE_STRING ".");
    return EXIT_SUCCESS;
}

