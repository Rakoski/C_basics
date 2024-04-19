//
// Created by mateus on 19/04/24.
//

#include <stdio.h>
#include <limits.h>

int limits() {
    unsigned int var1 = 0;
    unsigned int var2 = UINT_MAX;

    signed int var3 = INT_MIN;
    signed int var4 = INT_MAX;

    printf("""The unsigned range goes from %u to %u\n"
             "while the signed range goes from %d to %d""", var1, var2, var3, var4);

    return 0;
}
