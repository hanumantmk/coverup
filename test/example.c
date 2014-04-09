#include "libexample.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    int i = 0;
    int out;

    if (argc == 2) {
        i = atoi(argv[1]);
    }

    if (i < 1 || i > 255) {
        fprintf(stderr, "Please enter an integer between 1 and 255\n");
        return 1;
    }

    out = example_invoke(i);
    printf("0x%02x -> 0x%02x\n", i, out);

    return 0;
}
