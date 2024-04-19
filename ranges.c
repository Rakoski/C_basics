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

    unsigned long var5 = 0;
    unsigned long var6 = ULONG_MAX;

    signed long var7 = LONG_MIN;
    signed long var8 = LONG_MAX;

    unsigned short var9 = 0;
    unsigned short var10 = USHRT_MAX;

    signed short var11 = SHRT_MIN;
    signed short var12 = SHRT_MAX;

    printf("The unsigned int range goes from %u to %u\n"
           "The signed int range goes from %d to %d\n"
           "The unsigned long range goes from %lu to %lu\n"
           "The signed long range goes from %ld to %ld\n"
           "The unsigned short range goes from %hu to %hu\n"
           "The signed short range goes from %hd to %hd\n", 
           var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var12);

    return 0;
}
