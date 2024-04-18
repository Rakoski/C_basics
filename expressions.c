//
// Created by mateus on 17/04/24.
//

#include <stdio.h>

int expressions() {
    int two = 2, three = 3, six = 6;
    int result = (two + three) + six / three;
    printf("expressions is like: (%d + %d) + %d / %d\n", two, three, six, three);
    printf("and the result is: %d", result);
    return 0;
}
